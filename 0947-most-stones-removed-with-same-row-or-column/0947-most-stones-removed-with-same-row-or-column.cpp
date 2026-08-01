class Solution {
public:
    void solve(vector<vector<int>>& stones, int indx , vector<int>&visited ){
        visited[indx] = true;

        for(int i = 0; i < stones.size(); i++){
            int r = stones[indx][0];
            int c = stones[indx][1];
            if(  visited[i] == 0  &&  (stones[i][0] == r || stones[i][1] == c ) ){
                solve(stones,i,visited);
            }
        }
    }
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();

        vector<int>visited(n,0);

        int cnt = 0;
        for(int i  = 0; i < n; i++){
            if(visited[i] == true){
                continue;
            }

            solve(stones,i,visited);
            cnt++;
        }   

        return n-cnt;
    }
};