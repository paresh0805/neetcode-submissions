class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low=0;
        int high=heights.size()-1;
        int maxA=0;

        while(low<high){
            int w=high-low;
            int h=min(heights[low],heights[high]);
            maxA=max(maxA,w*h);
            if(heights[low]>heights[high]){
                high--;
            }
            else low++;
        }
        return maxA;
    }
};
