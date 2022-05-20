class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN) return 0;
        if(x<0)
            return -reverse(-x);
        
        int num=0;
        while(x)
        {
            if(num>INT_MAX/10) return 0;
            num=num*10+x%10;
            x=x/10;
        }
        return num;
    }
};
