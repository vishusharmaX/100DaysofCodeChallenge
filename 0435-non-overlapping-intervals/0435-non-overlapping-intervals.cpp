class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(begin(intervals),end(intervals));
        int i = 0;
        int j = 1;
        int n = intervals.size();
        int cnt = 0;
        while(j<n){
            vector<int>curr_element = intervals[i];
            vector<int>next_element = intervals[j];

            int cs = curr_element[0];
            int ce = curr_element[1];

            int ns = next_element[0];
            int ne = next_element[1];

            if(ce <= ns){//non overlapping
                i = j;
                j++;
            }
            else if(ce <= ne){
                j++;
                cnt++;
            }
            else if(ce > ne){
                i = j;
                j++;
                cnt++;
            }
        }
        return cnt;

    }
};