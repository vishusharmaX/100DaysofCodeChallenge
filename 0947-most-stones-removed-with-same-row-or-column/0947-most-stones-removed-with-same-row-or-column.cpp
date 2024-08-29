class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        
        map<int,int>mpp;
        mpp[stones[0][0]] = stones[0][1];
        mpp[stones[0][1]] = stones[0][0];
        int cnt = 0;
        for(int i = 1; i < stones.size(); i++){
            
            int first = stones[i][0];
            int second = stones[i][1];

            if(mpp.find(first) != mpp.end() ||  mpp.find(second) != mpp.end()){
                cnt++;
            }

            mpp[first]=second;
            mpp[second]=first;

        }

        return cnt;
    }
};