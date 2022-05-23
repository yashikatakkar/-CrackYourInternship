class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> result;
        if(n<4) return result;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int left=j+1, right=n-1; 
                int rem= target-nums[i]-nums[j];
                
                while(left<right)
                {
                    if(rem==nums[left]+nums[right])
                    {
                        result.push_back(vector<int>{nums[i],nums[j],nums[left],nums[right]});
                        left++;
                        right--;
                        
                        while(left<right && nums[left-1]==nums[left])
                            left++;
                        while(left<right && nums[right]==nums[right+1])
                            right--;
                    }
                    else if(rem<nums[left]+nums[right])
                        right--;
                    else left++;
                        
                }
                while(j+1<n && nums[j+1]==nums[j])
                    j++;
                
            }
            while(i+1<n && nums[i]==nums[i+1])
                i++;
        }
        return result;
    }
};
