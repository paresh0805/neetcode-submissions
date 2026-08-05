class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowBegin=0;
        int colBegin=0;
        int rowEnd=matrix.size()-1;
        int colEnd=matrix[0].size()-1;
        vector<int>ans;

        while(rowBegin<=rowEnd && colBegin<=colEnd){
            for(int j=colBegin;j<=colEnd;j++){
                ans.push_back(matrix[rowBegin][j]);
            }
            rowBegin++;

            for(int j=rowBegin;j<=rowEnd;j++){
                ans.push_back(matrix[j][colEnd]);
            }
            colEnd--;

            if(rowBegin<=rowEnd){
                for(int j=colEnd;j>=colBegin;j--){
                    ans.push_back(matrix[rowEnd][j]);
                }
            }
            rowEnd--;

            if(colBegin<=colEnd){
                for(int j=rowEnd;j>=rowBegin;j--){
                    ans.push_back(matrix[j][colBegin]);
            }
            }
            colBegin++;
        }
        return ans;

    }
};
