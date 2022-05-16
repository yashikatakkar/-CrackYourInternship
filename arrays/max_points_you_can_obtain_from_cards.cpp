class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int max=0, temp=0;
        for(int i=0;i<k;i++)
        {
            temp+=cardPoints[i];
        }
        max=temp;
        if(k==cardPoints.size())
        {
            return max;
        }
        int right=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--)
        {
            temp=temp-cardPoints[i]+cardPoints[right];
        if(temp>max)
            max=temp;
        right--;
        }
        return max;
        
    }
};
