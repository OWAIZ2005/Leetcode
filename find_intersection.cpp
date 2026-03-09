class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int m = nums2.size();
        unordered_set<int> s1;
        unordered_set<int> result;

        for (int i = 0; i < n; i++)
        {
            int num = nums1[i];
            s1.insert(num);
        }

        for (int j = 0; j < m; j++)
        {
            int num = nums2[j];
            if (s1.count(num)) // Does num exist inside s1 ?
            {
                result.insert(num);
            }
        }

        vector<int> ans(result.begin(), result.end());
        return ans;
    }
};