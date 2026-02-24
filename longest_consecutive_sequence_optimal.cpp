class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
        {
            return 0;
        }

        int longest = 1;
        unordered_set<int> st;
        for (int i = 0; i < n; i++)
        {
            st.insert(nums[i]); // so like this for loop I used is to basically insert the element from the vector into the set
        }

        for (auto it : st) // this for loop is used to iterate in the set
        {
            if (st.find(it - 1) == st.end()) // so basically this is used to check if if the previous element is exiting or not now in order to check this we are doing as st.find(it-1) == st.end() now this basically means that if the previous element is not found in the set then we will start counting the consecutive elements from this element and we will keep on counting
            // so or main aim here is that it-1 should not be present so we use st.find(it-1) == st.end()
            {
                int count = 1;
                int x = it;
                while (st.find(x + 1) != st.end()) // now this for checking if  the x+1 element is in the set that is why i am using st.find(x+1) != st.end()
                {
                    x = x + 1;
                    count++;
                }
                longest = max(longest, count);
            }
        }

        return longest;
    }
};