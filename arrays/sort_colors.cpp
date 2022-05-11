/*// using sorting 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int N=nums.size();
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(nums[i]<nums[j])
                    swap(nums[i],nums[j]);
            }
        }
    }
};


// using counting sort
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count1=0,count0=0,count2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                count0++;
            else if(nums[i]==1)
                count1++;
            else
                count2++;
        }
        int i=0;
        while(count0>0)
        {
            nums[i++]=0;
            count0--;
        }
        while(count1>0)
        {
            nums[i++]=1;
            count1--;
        }
        while(count2>0)
        {
            nums[i++]=2;
            count2--;
        }
        
    }
};

*/

// using Dutch National flag algorithm 
class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low=0,mid=0,high=nums.size()-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[low]);
                low++; mid++;
            }
            else if(nums[mid]==1)
                mid++;
            else
            {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
       
    
    }
};
