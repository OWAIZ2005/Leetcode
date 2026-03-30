class Solution
{
public:
    bool isPalindrome(string s)
    {
        int n = s.size();
        string cleaned = "";
        for (int i = 0; i < n; i++)
        {

            char c = s[i];
            if (isalnum(c)) // we use this to clean the string by removing all the special charecters
            {
                cleaned += tolower(c); // converting uppercase to lowercase
            }
        }

        string pallindrome = cleaned;
        reverse(pallindrome.begin(), pallindrome.end());

        cout << "pallindrom : " << pallindrome;

        return pallindrome == cleaned;
    }
};