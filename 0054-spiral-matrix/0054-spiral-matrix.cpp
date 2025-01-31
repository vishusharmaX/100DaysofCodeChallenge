class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        int startrow = 0;
        int startcol = 0;   
        int endingrow = n-1;
        int endingcol = m-1;
        int cnt = 0;
        int total = n *m;
        vector<int>ans;
        while(cnt <total){

            for(int i = startcol ; i <=endingcol && cnt < total ; i++){
                ans.push_back(matrix[startrow][i]);
                cnt++;
            }
            startrow++;

            for(int i = startrow ; i <=endingrow  && cnt < total; i++){
                ans.push_back(matrix[i][endingcol]);
                cnt++;
            }
            endingcol--;
            for(int i = endingcol ; i >= startcol && cnt < total ; i--){
                ans.push_back(matrix[endingrow][i]);
                cnt++;
            }
            endingrow--;
            for(int i = endingrow ; i >= startrow && cnt < total ; i--){
                ans.push_back(matrix[i][startcol]);
                cnt++;
            }
            startcol++;
        }
        return ans;
    }
};