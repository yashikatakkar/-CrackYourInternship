class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1, water=0;
        
        while(left<right){
            int width = right-left;
            int h=min(height[left], height[right]);
            water=max(water,(width*h));
            
            if(height[left]<height[right])
                left++;
            else
                right--;
            
        }
        return water;
    }
};
