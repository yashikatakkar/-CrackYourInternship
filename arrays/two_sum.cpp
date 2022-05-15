class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int ctr1,ctr2;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ctr1=i;
                    ctr2=j;
                }
            }
        }
        return {ctr1,ctr2};
    }
};
