// using brute force
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int globalProfit=0,curPro=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                const int curPro=prices[j]-prices[i];
            
            if(curPro>globalProfit)
                globalProfit=curPro;
            }
        }
       return globalProfit; 
    }
};


//using greedy algorithm
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buyPrice=INT_MAX;
        int globalProfit=0;
        
        for(int i=0;i<n;i++)
        {
            if(buyPrice>prices[i])
                buyPrice=prices[i];
            
            const int curProfit=prices[i]-buyPrice;
            
            if(curProfit>globalProfit)
                globalProfit=curProfit;
        }
       return globalProfit; 
    }
};

