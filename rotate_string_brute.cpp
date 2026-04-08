class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.size() != goal.size())
            return false;
        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            char b = s[0];
            s.erase(0, 1);
            s.push_back(b);

            if (s == goal)
            {
                return true;
            }
        }
        return false;
    }
};