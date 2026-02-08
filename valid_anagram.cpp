class Solution
{
public:
    bool isAnagram(string s, string t)
    {

        if (s.length() != t.length())
        {
            return false;
        }

        unordered_map<char, int> a_map;
        for (int i = 0; i < s.length(); i++)
        {
            a_map[s[i]]++;
            a_map[t[i]]--;
        }

        for (auto m = a_map.begin(); m != a_map.end(); m++)
        {
            if (m->second != 0)
            {
                return false;
            }
        }

        return true;
    }
};