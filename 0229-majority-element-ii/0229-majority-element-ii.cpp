class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();

        int cA = 0;
        int cB = 0;
        int countA = 0;
        int countB = 0;

        for(int x : nums)
        {
            if (x==cA)
            {
                countA++;
            }
            else if(x==cB)
            {
                countB++;
            }
            else if (countA==0)
            {
                cA = x;
                countA=1;
            }
            else if(countB == 0)
            {
                cB = x;
                countB = 1;
            }
            else
            {
                countA--;
                countB--;
            }
        }

        countA=0;
        countB = 0;
        for(int x:nums)
        {
            if(x==cA)
            {
                countA++;
            }
            else if(x == cB)
            {
                countB++;
            }
        }

        vector<int>ans;
        if(countA>n/3)
        {
            ans.push_back(cA);
        }

        if(countB>n/3)
        {
            ans.push_back(cB);
        }

        return ans;


        
    }
};