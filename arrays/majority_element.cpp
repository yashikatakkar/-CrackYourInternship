class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int freq=n/2;
        
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
        
        for(auto x: mp){
            if(x.second>freq) return x.first;
        }
        return 0;
    }
};
