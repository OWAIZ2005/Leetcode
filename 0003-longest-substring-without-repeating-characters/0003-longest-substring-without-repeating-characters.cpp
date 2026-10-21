class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int left =0;
        int right = 0;
        int maxSize = 0;
        int n = s.size();
        for(right=0;right<n;right++)
        {
            char x = s[right];
            mp[x]++;
            while(mp[x]>1)
            {
                mp[s[left]]--;
                left++;
            }
            int size = right-left+1;
            maxSize = max(size,maxSize);
        }

        return maxSize;

        
        

       
       
        
    }
};