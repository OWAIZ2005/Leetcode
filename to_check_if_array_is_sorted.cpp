class Solution
{
public:
    bool check(vector<int> &nums)
    {
        for (int i = 1; i <= nums.size() - 1; i++)
        {
            if (nums[i] >= nums[i - 1])
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};