class Solution
{
public:
    int sumofD(vector<int> &nums, int div)
    {
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int value = ceil((double)nums[i] / (double)(div));
            sum += value;
        }
        return sum;
    }
    int smallestDivisor(vector<int> &nums, int threshold)
    {
        int n = nums.size();
        int maxi = INT_MIN;
        int ans = -1;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, nums[i]);
        }
        int low = 1;
        int high = maxi;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (sumofD(nums, mid) <= threshold)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};