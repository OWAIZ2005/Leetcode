class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        int count = 0;
        vector<int> prefixSum(n, 0);
        prefixSum[0] = nums[0];
        for (int i = 1; i < n; i++)
        {
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }

        unordered_map<int, int> m; // used for storing P.S , FREQUENCY
        for (int j = 0; j < n; j++)
        {
            if (prefixSum[j] == k)
            {
                count++;
            }

            int val = prefixSum[j] - k;

            if (m.find(val) != m.end()) // so basically in hashmap when we use find and if it returns an iterator then it means that m.find != m.end if not   m.find != m.end
            {
                count += m[val];
            }

            if (m.find(prefixSum[j]) == m.end()) //  If key is NOT found, find() returns a special iterator called m.end().
            {
                m[prefixSum[j]] = 0;
            }

            m[prefixSum[j]]++;
        }
        return count;
    }
};