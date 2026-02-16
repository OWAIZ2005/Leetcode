class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        unordered_set<int> s;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (s.count(nums[i]))
            {
                return true;
            }
            else
            {
                s.insert(nums[i]);
            }
        }
        return false;

        /* int n = nums.size();
         sort(nums.begin(),nums.end());
         for(int i = 1 ; i<n ; i++)
         {
             if(nums[i]==nums[i-1])
             {
                 return true;
             }
         }
         return false; */
    }
};