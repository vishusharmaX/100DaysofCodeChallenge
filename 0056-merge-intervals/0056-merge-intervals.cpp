class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(int i = 1; i < intervals.size(); i++){
            //overlap condition
            vector<int>&back = ans.back();
            int endtime = back[1];
            int starttime = intervals[i][0];
            if(endtime >= starttime){
                back[1] = intervals[i][1];
            }
            else{
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }

};