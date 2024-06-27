class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        unordered_map<int,int>mpp;

        for(int i = 0 ; i < edges.size(); i++){
            int edge1 = edges[i][0];
            int edge2 = edges[i][1];

            mpp[edge1]++;
            mpp[edge2]++;
        }
        int maxi = INT_MIN;
        int ans = 0;
        for(auto it : mpp){
            if(it.second >maxi){
                ans = it.first;
                maxi = it.second;
            }
            // cout<<it.first<<"->"<<it.second<<endl;
        }

        return ans;
    }
};