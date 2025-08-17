class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int drop = 0;
        for (int i = 0; i < n; i++)
        {
            int nextIndex = (i + 1) % n;
            if (nums[i] > nums[nextIndex])
            {
                drop++;
                if (drop > 1)
                {
                    return false;
                }
            }
        }

        return true;
    }
};