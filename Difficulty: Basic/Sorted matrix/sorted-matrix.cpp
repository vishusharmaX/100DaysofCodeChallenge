// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        // code here
        vector<int>ans;
        for(int i = 0; i< mat.size(); i++){
            for(int j = 0; j < mat[0].size();j++){
                ans.push_back(mat[i][j]);
            }
        }
        
        sort(ans.begin(),ans.end());
        int idx = 0;
        for(int i = 0; i< mat.size(); i++){
            for(int j = 0; j < mat[0].size();j++){
                mat[i][j] = ans[idx++];
            }
        }
        
        return mat;
    }
};