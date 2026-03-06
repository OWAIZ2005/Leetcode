class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        int m = s.size();
        int n = t.size();
        int result = 0;
        for (int i = 0; i < m; i++)
        {
            char c = s[i];
            result ^= c;
        }

        for (int j = 0; j < n; j++)
        {
            char d = t[j];
            result ^= d;
        }

        return result;
    }

    // XOR APPROCH
};