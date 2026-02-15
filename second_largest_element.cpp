class Solution
{
public:
    int secondHighest(string s)
    {
        int n = s.size();
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                s[j] = s[i];
                j++;
            }
        }
        if (j < 2)
            return -1;
        s.resize(j);
        sort(s.begin(), s.end(), greater<char>()); // used to sort in descending order
        for (int i = 1; i < j; i++)
        {
            if (s[i] != s[0])
            {
                return s[i] - '0';
            }
        }
        return -1;
    }
};