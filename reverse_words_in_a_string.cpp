class Solution
{
public:
    string reverseWords(string s)
    {
        vector<string> words;
        stringstream ss(s);
        string w;       // this will temporarly store each words extracted from stream ie  stringstream ss(s);
        while (ss >> w) // Read the next word from the stringstream and store it in w. it works like cin>>w
        {
            words.push_back(w);
        }

        reverse(words.begin(), words.end());

        // from this step we will be rebuilding the string
        int n = words.size();
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            string word = words[i];
            ans += word + " ";
        }
        ans.pop_back();
        return ans;
    }
};

// >> is the extraction operator used during stringstream
// ss >> w this means to read word from the string
// file >> x this means to read files from x