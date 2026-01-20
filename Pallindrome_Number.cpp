class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        long long rev_num = 0;
        int dup = x;
        while (x > 0)
        {
            int ld = x % 10;
            rev_num = (rev_num * 10) + ld;
            x = x / 10;
        }
        return dup == rev_num;
    }
};