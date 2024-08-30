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
        
        //left check
        for(int col = 0; col < colindx; col++){
            if(board[rowindx][col] == 1){
                return false;
            }
        }
        //diagonal 1
        int i = rowindx ,j =colindx;
        
        while(i>= 0 && j >=0){
            if(board[i][j] == 1)
                return false;
            
            i--;
            j--;
        }
        
        i = rowindx, j = colindx;
        while(i < n && j >= 0){
            if(board[i][j] == 1){
                return false;
            }
            i++;
            j--;
        }
        
        
        return true;
    }
    
    void solve(int colindx, vector<vector<int>> & board, vector<int>&temp, int n){
        
        if(colindx == n){
            ans.push_back(temp);
            return;
        }
        
        for(int rowindx = 0; rowindx <n ; rowindx++){
            if(check(rowindx,colindx,board,n)){
                temp.push_back(rowindx+1);
                board[rowindx][colindx] = 1;
                solve(colindx+1,board,temp,n);
                temp.pop_back();
                board[rowindx][colindx] = 0;
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