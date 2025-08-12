class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int n = mat.size(), m = mat[0].size();
        int sr = 0 , sc = 0 , er= n-1, ec = m-1;
        vector<int>ans;
        while(sr <= er && sc <= ec){
            
            //top
            for(int i = sc; i<= ec; i++){
                ans.push_back(mat[sr][i]);
            }
            
            
            //right
            for(int i = sr+1; i<= er; i++){
                ans.push_back(mat[i][ec]);
            }
            
            
            //bottom
            for(int i = ec-1; i >= sc; i--){
                if(sr == er){
                    break;
                }
                ans.push_back(mat[er][i]);
            }
            
            //left
            for(int i = er-1; i>= sr+1; i--){
                if(ec == sc){
                    break;
                }
                ans.push_back(mat[i][sc]);
            }
            
            sr++;
            ec--;
            er--;
            sc++;
        }
        
        return ans;
        
    }
};