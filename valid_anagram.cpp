class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
        {
            return false;
        }

        int m = s.size();
        int n = t.size();

        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for (int i = 0; i < m; i++)
        {
            char c = s[i];
            mp1[c]++;
        }

        for (int j = 0; j < n; j++)
        {
            char d = t[j];
            mp2[d]++;
        }

        for (auto it : mp2)
        {
            if (mp1[it.first] != it.second)
            {
                return false;
            }
        }

        return true;
    }
};