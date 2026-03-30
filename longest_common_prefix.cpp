class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        int n = strs.size();
        for (int j = 0; j < strs[0].size(); j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (j >= strs[i].size() || strs[i][j] != strs[0][j])
                {
                    return strs[0].substr(0, j);
                }
            }
        }

        return strs[0]; // if no  mismatch at all That means: Every character matched For all strings Till the end of the first string
    }
};

// strs[i][j] != strs[0][j] we do this because we are gonna compare the first charecter or the jth charecter of the first element or the jth element  of the vector to other element in the vectors  ie We compare the j-th character of the first string (strs[0][j]) with the j-th character of every other string (strs[i][j]).