class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < n - 2; i++)
        {
            int left = i + 1;
            int right = n - 1;
            while (left < right)
            {
                int total = nums[i] + nums[left] + nums[right];
                int sub = abs(total - target);

                if (sub < abs(closestSum - target))
                {
                    closestSum = total;
                }
                if (total < target)
                {
                    left++;
                }
                else if (total > target)
                {
                    right--;
                }

                else
                {
                    return total;
                }
            }
        }
        return closestSum;
    }
};