//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int helpaterp(vector<vector<int>> hospital)
    {
        //code here
        int n = hospital.size();
        int m = hospital[0].size();
        queue<pair<int,int>>q;
        for(int i =  0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(hospital[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        int cnt = 0;
        while(!q.empty()){
                cnt++;
                int size = q.size();
                while(size--){
                     int x = q.front().first;
            int y = q.front().second;
            q.pop();
            int dirx[] = {-1,1,0,0};
            int diry[] = {0,0,-1,1};
            
            for(int k = 0; k < 4; k++){
                int newx = x + dirx[k];
                int newy = y + diry[k];
                
                if(newx>=0 && newx < n && newy>=0 && newy < m && hospital[newx][newy]==1){
                    hospital[newx][newy] = 2;
                    q.push({newx,newy});
                }
            }
                }
            
        }
        for(int i =  0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(hospital[i][j] == 1){
                    return -1;
                }
            }
        }
        
        
        return cnt-1;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R;int C;
        
        cin>>R>>C;
        vector<vector<int>> hospital;
        int i,j;
        for(i=0;i<R;i++)
         {   vector<int> temp;
             for(j=0;j<C;j++)
            {
                int k;
                cin>>k;
                temp.push_back(k);
            }
            hospital.push_back(temp);
         }
        
        Solution ob;
        int ans = ob.helpaterp(hospital);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends