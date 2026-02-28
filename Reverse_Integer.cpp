class Solution
{
public:
    int reverse(long n)
    {
        bool sign = true;
        if (n < 0)
        {
            sign = false;
        }
        n = abs(n);
        long rev = 0;
        while (n > 0)
        {
            int rem = n % 10; // this gives u the remainder
            rev = rev * 10 + rem;
            n = n / 10;
            if (rev > INT_MAX || rev < INT_MIN)
            {
                return 0;
            }
        }
        if (!sign) // so like after temporarly changing the n for reversing it stays positive so if like sign = false not true (!sign) then we retrive back the sign
        {
            return -1 * (int)rev;
        }
        return (int)rev;
    }
};
