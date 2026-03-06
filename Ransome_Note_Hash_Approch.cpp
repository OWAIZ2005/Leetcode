class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int m = ransomNote.size();
        int n = magazine.size();
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for (int i = 0; i < m; i++)
        {
            char c = ransomNote[i];
            mp1[c]++;
        }

        for (int j = 0; j < n; j++)
        {
            char d = magazine[j];
            mp2[d]++;
        }

        for (auto it : mp1)
        {
            if (mp2[it.first] < it.second) // okay so the main logic over here is we consider by taking the frequency now inorder for the ransonoter to take elements from magazine it should more than or exactly equal to what ransomenote wants
            {
                return false;
            }
        }
        return true;
    }
};