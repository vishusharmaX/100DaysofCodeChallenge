class Solution {
  public:
    int helpaterp(vector<vector<int>> hospital) {
        
        int n = hospital.size();
        int m = hospital[0].size();
        
        queue<pair<int,int>>q;
        int cnt = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(hospital[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        
        while(!q.empty()){
            int size = q.size();
            bool spread = false;

            while(size--){
                auto p = q.front();
                int x = p.first;
                int y = p.second;
                q.pop();

                int dirx[4] = {0,0,-1,1};
                int diry[4] = {-1,1,0,0};
                
                for(int k = 0; k < 4; k++){
                    int newx = x + dirx[k];
                    int newy = y + diry[k];

                    if(newx>=0 && newx<n && newy>=0 && newy<m && hospital[newx][newy]==1){
                        hospital[newx][newy] = 2;
                        q.push({newx,newy});
                        spread = true;
                    }
                }
            }

            if(spread) cnt++;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(hospital[i][j] == 1){
                    return -1;
                }
            }
        }

        return cnt;
    }
};