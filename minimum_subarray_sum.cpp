class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int minlength = INT_MAX;
        int left = 0;
        int right = 0;
        int sum = 0;

        for (int right = 0; right < n; right++)
        {
            sum += nums[right];
            while (sum >= target)
            {
                int length = right - left + 1;
                minlength = min(length, minlength);

                sum -= nums[left];
                left++;
            }
        }
        if (minlength == INT_MAX)
        {
            return 0;
        }
        return minlength;
    }
};