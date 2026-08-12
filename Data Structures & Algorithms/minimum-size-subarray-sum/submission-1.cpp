class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int left=0;
       int minwindow=INT_MAX;
       int sum=0;
       for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum >= target){
                minwindow = min(minwindow,right-left+1);
                sum-=nums[left];
                left++;
            }
       }
       return minwindow==INT_MAX ? 0:minwindow;
    }
};