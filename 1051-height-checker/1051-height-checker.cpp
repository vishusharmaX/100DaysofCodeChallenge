class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>curr = heights;

        sort(curr.begin(),curr.end());
        int cnt = 0;
        for(int i = 0 ; i < heights.size(); i++){
            if(curr[i] != heights[i]){
                cnt++;
            }
        }
        return cnt;
    }
};