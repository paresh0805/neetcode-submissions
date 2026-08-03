class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int i=0, j=n-1;
        int maxA=0;
        while(i<j){
            int w=j-i;
            int h=min(heights[i],heights[j]);
            maxA=max(maxA, w*h);
            if(heights[i]>heights[j]){
                j--;
            }
            else i++;
        }
        return maxA;
    }
};
