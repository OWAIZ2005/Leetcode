class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        for (int i = 0; i < haystack.size(); i++)
        {
            if (haystack[i] == needle[0])
            {
                int j = 0; // for traversing the needle
                int k = i; // for traversing the haystack

                while (j < needle.size() && k < haystack.size() && needle[j] == haystack[k])
                {
                    j++;
                    k++;
                    if (j == needle.size()) // condition to check if we reacched the final character of the needle or not
                    {
                        return i;
                    }
                }
            }
        }

        return -1;
    }
};
