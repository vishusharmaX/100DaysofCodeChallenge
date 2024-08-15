//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool solve(vector<vector<int>>&matrix ,vector<vector<int>>&ans,int i ,int j){
        int n = matrix.size();
        if(i >= n || j >= n)
            return false;
        ans[i][j] = 1;
        if(i == n-1 && j== n-1){
            return true;
        }
        int jumps = matrix[i][j];
        for(int k = 1; k <= jumps; k++){
            if(solve(matrix,ans,i,j+k))return true;
            if(solve(matrix,ans,i+k,j))return true;
        }
        ans[i][j] = 0;
        return false;
        
    }
	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix){
	   // Code here
	   int n = matrix.size();
	   vector<vector<int>>ans(n,vector<int>(n,0));
	   if(solve(matrix,ans,0,0))
	        return ans;
	       
	   else
	       return {{-1}};
	   
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends