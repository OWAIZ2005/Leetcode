class Solution
{
public:
    bool isPalindrome(string s)
    {
        int n = s.size();
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if (isalnum(s[i]))
            {
                s[j] = tolower(s[i]);
                j++;
            }
        }
        s.resize(j);
        cout << "word : " << s;
        int start = 0;
        int end = s.size() - 1;

        while (start < end)
        {
            if (s[start] == s[end])
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};

//// so like in order to have a string with no spaces and extra charecter which include speacial as well we take a pointer j and we use that j pointer to convert charecters in a string to lowercase and we use isalnum so like this function basicakkt does not include any special charecters or spaces. and also we use the j  pointer approch because we do not need to create a new string to convert a given string to isalnum