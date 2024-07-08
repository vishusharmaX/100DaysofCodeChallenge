//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        
        
        queue<pair<int,int>> q;
        q.push({sr,sc});
        vector<vector<int>> vis(image.size(),vector<int>(image[0].size(),0));
        vis[sr][sc]=1;
        int oldcolor=image[sr][sc];
        while(!q.empty()){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            
            image[i][j]=newColor;
            int x[]={-1,1,0,0};
            int y[]={0,0,-1,1};
            for(int k=0;k<4;k++){
                int ni=i+x[k];
                int nj=j+y[k];
                if(ni>=0&&nj>=0&&ni<image.size()&&nj<image[0].size()&&!vis[ni][nj]&&image[ni][nj]==oldcolor){
                    vis[ni][nj]=1;
                    q.push({ni,nj});
                }
            }
        }
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends