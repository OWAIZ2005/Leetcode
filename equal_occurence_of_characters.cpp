class Solution
{
public:
    bool areOccurrencesEqual(string s)
    {
        unordered_map<char, int> mp;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            mp[c]++;
        }

        int value = mp.begin()->second; // it is a way to access the second element in the has map
        for (auto it : mp)              // iterator for loop
        {
            if (it.second != value)
            {
                return false;
            }
        }

        return true;
    }
};