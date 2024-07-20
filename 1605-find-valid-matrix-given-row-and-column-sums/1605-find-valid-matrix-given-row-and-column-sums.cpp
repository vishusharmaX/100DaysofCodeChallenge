class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int row = rowSum.size();
        int col = colSum.size();
        vector<vector<int>> matrix(row,vector<int>(col,0));

        for(int i = 0 ; i < row ; i++){
            for(int  j= 0; j < col ; j++){
                int value = min(rowSum[i],colSum[j]);
                matrix[i][j] = value;
                rowSum[i]-=value;
                colSum[j]-=value;
            }
        }

        return matrix;
    }
};