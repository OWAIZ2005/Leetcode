class Solution
{
public:
    vector<int> findWordsContaining(vector<string> &words, char x)
    {
        vector<int> ans;
        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            string s = words[i];
            if (s.find(x) != string::npos) // string::npos is a special constant in C++ that means not found

            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};