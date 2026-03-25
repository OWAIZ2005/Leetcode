class Solution {
public:
    int capacitycalculation(vector<int>& weights , int capacity)  // so the main idea should be the sum should be less than the capacity 
    {
        int n = weights.size();
        int days_used = 1;
        int current_sum = 0;
        for(int i =0;i<n;i++)
        {
            if((current_sum + weights[i]) <= capacity)
            {
                current_sum += weights[i];
            }
            else
            {
                days_used++;
                current_sum = weights[i];

            }
        }
        return days_used;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0 ;
        for(int i =0;i<n;i++)
        {
            sum+=weights[i];
        }
        int maxi = INT_MIN;
        for(int i =0;i<n;i++)
        {
            maxi =  max(maxi,weights[i]);
        }

        int low = maxi;
        int high = sum;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(capacitycalculation(weights,mid) > days)
            {
                low=mid+1;

            }
            else
            {
                high = mid-1;
            }
        }
        return low;



        
    }
};