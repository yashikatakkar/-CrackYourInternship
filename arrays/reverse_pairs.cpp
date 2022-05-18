class Solution {
public:
    int reversePairs(vector<int>& nums) {
        multiset<long long> temp;
        int rev=0;
        int n=nums.size();
        for(int i=n-1;i>=0;i--)
        {
            long long cur=nums[i];
            auto iter=lower_bound(temp.begin(),temp.end(),cur);
            
            rev+=distance(temp.begin(),iter);
            temp.insert(2*cur);
        }
        return rev;
        
    }
};
