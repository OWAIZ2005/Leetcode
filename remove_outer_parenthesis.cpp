class Solution
{
public:
    string removeOuterParentheses(string s)
    {
        int n = s.size();
        string newString = "";
        int balance = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                if (balance > 0)
                {
                    newString += s[i];
                }
                balance++;
            }
            else
            {
                balance--;
                if (balance > 0)
                {
                    newString += s[i];
                }
            }
        }
        return newString;
    }
};