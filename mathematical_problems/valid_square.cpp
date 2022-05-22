class Solution {
public:
    int dis(vector <int>& p1,vector<int>& p2)
    {
        return (p1[0]- p2[0])*(p1[0]- p2[0])+ (p1[1]-p2[1])*(p1[1]-p2[1]);
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        if(p1==p2||p1==p3||p1==p4||p2==p3||p2==p4||p3==p4) return false;
        
        if(dis(p1,p2)<dis(p1,p3)) swap(p2,p3);
        if(dis(p1,p2)<dis(p1,p4)) swap(p2,p4);
                                        
        if(p1[0]+p2[0]!=p3[0]+p4[0] || p1[1]+p2[1] != p3[1]+p4[1])
            return false;
        if(dis(p1,p3)!=dis(p1,p4)) return false;
        if(dis(p1,p2)!=dis(p3,p4)) return false;
        if(dis(p1,p2)!=2*dis(p1,p3)) return false;
        
           return true;
    }
};
