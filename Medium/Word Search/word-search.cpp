//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:

    bool solve(vector<vector<char>>& board, string word,int i , int j , int index , int m , int n){
        
        if(index == word.length()){
            return true;
        }
        
        if(i < 0 || j < 0 || i >= m || j>=n || board[i][j] == '$' || board[i][j] != word[index]){
            return false;
        }
        
        char ch = board[i][j];
       board[i][j] = '$';
        int top = solve(board,word,i-1,j,index+1,m,n);
        int down = solve(board,word,i+1,j,index+1,m,n);
        int left = solve(board,word,i,j-1,index+1,m,n);
        int right = solve(board,word,i,j+1,index+1,m,n);
        
        board[i][j] = ch;
        
        return top||down||left||right;
        
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int m = board.size();
        int n = board[0].size();
        
        for(int i = 0 ;  i < m; i++){
            for(int j = 0; j<n; j++){
                if(board[i][j] == word[0]){
                    if(solve(board,word,i,j,0,m,n)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends