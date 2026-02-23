class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int lastSmaller = INT_MIN;    // declare this variable to store the last minimum found value 
        int count = 0 ;
        int longest = 0;                    // initiate this variable to find have a count of the element in the longest consequtive sequence 
        for(int i =0 ; i<n;i++)
        {
            if(nums[i]-1 == lastSmaller)
            {
                count ++;
                lastSmaller=nums[i];
            }

            else if (nums[i]!=lastSmaller)
            {
                count = 1;
                lastSmaller = nums[i];
            }

            longest = max(longest,count);
        }

        return longest;    
    }
};