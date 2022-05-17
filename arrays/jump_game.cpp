class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=0, last=0;
        while(i<nums.size() && i<=last)
        {
            last=max(i+nums[i],last);
            i++;
        }
        if(i==nums.size())
            return true;
        return false;
        
    }
};
