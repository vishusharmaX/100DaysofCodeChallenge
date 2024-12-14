class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
       int cnt = 0;  
        int prevEnd = intervals[0][1]; 

        for (int i = 1; i < intervals.size(); i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];

           
            if (start < prevEnd) {
                cnt++;  
            } else {
                prevEnd = end; 
            }
        }

        return cnt;
    }
};