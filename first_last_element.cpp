class Solution
{
public:
    int FirstOccurence(vector<int> &nums, int target)
    {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int ans = -1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                h = mid - 1; // this is the main thing to be remebered  for the first occurence
            }
            else if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        return ans;
    }

    int lastOccurence(vector<int> &nums, int target)
    {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int ans = -1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (nums[mid] == target)
            {
                ans = mid;
                l = mid + 1; // this is the thing top be remembered for the last occurence
            }
            else if (nums[mid] < target)
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        int first = FirstOccurence(nums, target);
        int last = lastOccurence(nums, target);
        return {first, last};
    }
};