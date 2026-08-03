class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0, c1=0, c2=0;
        for(auto num:nums){
            if(num==0) c0++;
            else if(num==1) c1++;
            else c2++;
        }

        int idx=0;
        while(c0>0){
            nums[idx++]=0;
            c0--;
        }
        while(c1>0){
            nums[idx++]=1;
            c1--;
        }
        while(c2>0){
            nums[idx++]=2;
            c2--;
        }
        return;

    }
};