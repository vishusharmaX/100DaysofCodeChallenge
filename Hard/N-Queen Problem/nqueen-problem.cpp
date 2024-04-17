//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>>ans;
    
    bool isValid(vector<vector<int>> & v, int n , int row , int col){
            
        //upward safe
        
        for(int i = row -1 ; i >= 0 ; i--){
            if(v[i][col] != 0 )
                return false;
        }
        
        //updward left diagonal
        
        for(int i = row-1, j= col-1; i>=0 && j>=0 ; i--,j--){
            if(v[i][j] != 0)
                return false;
        }
        
        //upward right diagonal
        for(int i = row-1, j= col+1; i>=0 && j < n ; i--,j++){
            if(v[i][j] != 0 )
                return false;
        }
        
        return true;
        
    };
    
    void solve(vector<vector<int>>& v ,int n , int row , vector<int>temp){
        
         if(row >= n){
            vector<int> temp;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (v[i][j] != 0) {
                        temp.push_back(j + 1);
                        break;
                    }
                }
            }
            ans.push_back(temp);
            return;
        }
        
        for(int col = 0 ; col < n ; col++){
            if(isValid(v,n,row,col)){
                v[row][col] = row+1 ;
                solve(v,n,row+1,temp);
                v[row][col] = 0;
            }
        }
            
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        if(n == 1)
            return {{1}};
        
        vector<vector<int>>v(n,vector<int>(n,0));
        vector<int>temp;
        
        solve(v,n,0,temp);
        
        return ans;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<vector<int>> ans = ob.nQueen(n);
        if(ans.size() == 0)
            cout<<-1<<"\n";
        else {
            for(int i = 0;i < ans.size();i++){
                cout<<"[";
                for(int u: ans[i])
                    cout<<u<<" ";
                cout<<"] ";
            }
            cout<<endl;
        }
    }
    return 0;
}
// } Driver Code Ends