class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> count(nums.size(),0);
        int rep;
        
        for(int i=0;i<nums.size();i++)
            count[nums[i]]++;
        
    for(int i=0;i<nums.size();i++)
        if(count[i]>1)
        {
            rep=i;
            break;
        }
    return rep;
    }
};
