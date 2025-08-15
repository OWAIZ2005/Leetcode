class Solution
{
public:
    bool isPalindrome(string s)
    {
        string clean = ""; // opening a empty string named clean
        for (char c : s)
        { // range based for loop(type of for loop)
            if (isalnum(c))
            {
                clean += tolower(c); // after converrting all the characters in string to lowercase and removing spaces and extra characters we add it to the a new string named clean
            }
        }
        int left = 0, right = clean.size() - 1;
        while (left < right)
        {
            if (clean[left] != clean[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};