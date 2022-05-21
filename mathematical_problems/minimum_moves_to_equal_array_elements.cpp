class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int least=INT_MAX, sum=0;
        for(int i=0;i<n;i++)
        {
            least=min(least,nums[i]);
            sum+=nums[i];
        }
        return (sum-n*least);
        
        
    }
};
