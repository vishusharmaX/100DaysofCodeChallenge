//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<int>>ans;
    
    bool check(int rowindx, int colindx,vector<vector<int>>&board,int n){
        
        for(int i = 0 ; i < colindx; i++){
            if(board[rowindx][i] == 1)
                return false;
        }
        
        int i = rowindx , j = colindx;
        while(i >= 0 && j >= 0){
            if(board[i][j] == 1)
                return false;
            else{
                i--;
                j--;
            }
        }
        
        i = rowindx,j = colindx;
        while(i < n && j >= 0){
            if(board[i][j] == 1)
                return false;
            else{
                i++;
                j--;
            }
        }
        
        
        return true;
    }
    
    
    
    void solve(int colindx,vector<vector<int>>&board,vector<int>&temp, int n){
        
        if(colindx == n){
            ans.push_back(temp);
            return;
        }
        
        
        for(int row = 0; row < n; row++){
            if(check(row,colindx,board,n)){
                board[row][colindx] = 1;
                temp.push_back(row+1);
                solve(colindx+1,board,temp,n);
                board[row][colindx] = 0;
                temp.pop_back();
                
            }
        }
    }
    
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<vector<int>>board(n,vector<int>(n,0));
        vector<int>temp;
        solve(0,board,temp,n);
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