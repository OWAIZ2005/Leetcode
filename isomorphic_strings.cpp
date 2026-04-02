class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        int n = s.size();

        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        for (int i = 0; i < n; i++)
        {
            char a = s[i];
            char b = t[i];

            if (mp1.find(a) != mp1.end()) // if a is found then it goes to inside if
            {
                if (mp1[a] != b) // so basically before its all the charecters will be mapped so this line checks if the mapped charecter is same as before mapped charecter
                {
                    return false;
                }
                else
                {
                    mp1[a] = b;
                }
            }
            else
            {
                mp1[a] = b;
            }
            if (mp2.find(b) != mp2.end())
            {
                if (mp2[b] != a)
                {
                    return false;
                }
                else
                {
                    mp2[b] = a;
                }
            }
            else
            {
                mp2[b] = a;
            }
        }
        return true;
    }
};