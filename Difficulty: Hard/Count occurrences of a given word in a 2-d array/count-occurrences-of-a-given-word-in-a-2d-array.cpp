// User function Template for C++

class Solution {
  public:
    int ans ;
    
    void solve(vector<vector<char>>&mat, int i , int j, string target , int indx){
       if (i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() 
       || indx >= target.length() || mat[i][j] != target[indx]) return;

        
        if(indx == target.length()-1){
            ans++;
            return;
        }
        char ch = mat[i][j];
        mat[i][j] = '0';
        solve(mat,i-1,j,target,indx+1);
        solve(mat,i+1,j,target,indx+1);
        solve(mat,i,j-1,target,indx+1);
        solve(mat,i,j+1,target,indx+1);
        mat[i][j] = ch;
    }
    
    int findOccurrence(vector<vector<char> > &mat, string target) {
        ans =0;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
               solve(mat,i,j,target,0); 
            }
        }
        return ans;
        
    }
};