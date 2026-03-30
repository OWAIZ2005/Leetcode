class Solution
{
public:
    string largestOddNumber(string num)
    {
        int n = num.size();
        int maxi = INT_MIN;
        if ((num[n - 1] - '0') % 2 != 0)
            return num;
        for (int i = n - 1; i >= 0; i--)
        {
            if ((num[i] - '0') % 2 != 0)
            {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};

// so in other to convert a string like 52 to a number u can do num[i]-'0'
// and also substring can be returned by num.substr(start ,end);