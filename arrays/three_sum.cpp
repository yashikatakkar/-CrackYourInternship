class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        int n=nums.size();
        if(n<3)
            return result;
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) // to skip the duplicate number
                continue;
            int left=i+1, right=n-1;
            while(left<right)
            {
                if(nums[i]+nums[left]+nums[right]==0)
                {
                    result.push_back(vector<int>{nums[i],nums[left],nums[right]});
                    
                    while(left<right && nums[left]==nums[left+1])
                        left++;
                    while(left<right && nums[right]==nums[right-1])
                        right--;
                    left++;
                    right--;
                }
                else if(nums[i]+nums[left]+nums[right]<0)
                    left++;
                else right--;
            }
        }
        return result;
        
    }
};
