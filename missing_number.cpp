class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int expected = n * (n + 1) / 2;
        int actual = 0;
        for (int i = 0; i < n; i++)
        {
            int num = nums[i];
            actual += num;
        }
        int s = expected - actual;
        return s;
    }
};