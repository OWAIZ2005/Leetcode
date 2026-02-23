class Solution
{
public:
    bool ls(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return true;
            }
        }
        return false;
    }
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        int longest = 0;
        for (int i = 0; i < n; i++)
        {
            int x = nums[i];
            int count = 1.;
            while (ls(nums, x + 1) == true)
            {
                x = x + 1;
                count++;
            }
            longest = max(longest, count);
        }

        return longest;
    }
};
