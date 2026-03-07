class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> jewelSet;
        int n = jewels.size();
        int m = stones.size();
        for (int i = 0; i < n; i++)
        {
            char c = jewels[i];
            jewelSet.insert(c);
        }
        int count = 0;

        for (int j = 0; j < m; j++)
        {
            char d = stones[j];
            if (jewelSet.count(d))
            {
                count++;
            }
        }
        return count;
    }
};
