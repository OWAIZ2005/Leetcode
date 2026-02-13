class Solution {

public:

   int bsearch(int target_idx, int k, vector<int>& nums, vector<long long>& prefixSum)

   {
    int target = nums[target_idx];
    int l = 0 ; 
    int r = target_idx ; 
    int best_idx = target_idx; 

    while (l<=r)
    {
        int mid = l+(r-l)/2;

        long long count = (target_idx-mid+1);

        // ❌ You used target_idx earlier — should be target value
        long long windowSum = count * target;

        long long currSum = prefixSum[target_idx]-prefixSum[mid] + nums[mid];

        long long ops = windowSum - currSum;

        if(ops>k)
        {
            l = mid + 1;
        }
        else 
        {
            best_idx = mid ;
            r = mid-1;  
        }
    }

    return target_idx - best_idx + 1 ;  
    // this  will return the count of the elements between mid and target_idx   

   }

    int maxFrequency(vector<int>& nums, int k) {

        int n = nums.size();

        sort(begin(nums),end(nums));

        // ❌ MUST be long long (not long)
        vector<long long> prefixSum(n);   

        // so we are using prefix sum to basically sum of elements within a specific range

        prefixSum[0] = nums[0];

        for(int i = 1 ; i<n ; i++)
        {
            prefixSum[i] = prefixSum[i-1] + nums[i] ; 
        }

        int result = 0;

        for ( int target_idx = 0 ; target_idx<n ; target_idx++)   
        // this can be used to generate the best target index after pointing it to the bsearch function 
        {
            result = max(result , bsearch(target_idx,k,nums,prefixSum));  
            
            /* bsearch(target_idx,k,nums,prefixSum)
               ---> this will change to the count that I am returning 
               in the bsearch(...) function */
        }

        return result ;   // this will give u the final result 
        
    }
};
