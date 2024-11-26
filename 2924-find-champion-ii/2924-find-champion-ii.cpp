class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        unordered_map<int,int>indeg;
        for(int i=0;i<n;i++){
            indeg[i]=0;
        }
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            indeg[v]++;
        }
        int cnt=0;
        int ans=-1;
        for(auto i:indeg){
            if(i.second==0){
                ans=i.first;
                cnt++;
            }
        }
        if(cnt==1)return ans;
        return -1;
    }
};