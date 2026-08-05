class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int minwindowsize=INT_MAX;
       int currsum=0;
        int low=0;
       for(int high=0;high<nums.size();high++){
        currsum+=nums[high];

        while(currsum>=target){
            minwindowsize=min(minwindowsize,high-low+1);
            currsum-=nums[low];
            low++;
        }
       }
       return minwindowsize==INT_MAX ? 0: minwindowsize;
    }
};