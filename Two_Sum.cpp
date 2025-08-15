class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        unordered_map<int, int> mp;
        // a loop  to check if partner exists  in the map
        for (int i = 0; i < nums.size(); i++)
        {
            int partner = target - nums[i];
            // to check if partner exists in the map
            if (mp.find(partner) != mp.end())
            {
                return {mp[partner], i};
            }

            mp[nums[i]] = i; // adds the current number to the hash table with its index.  ( mp[key] = value; )
        }
        return {};
    }
};
