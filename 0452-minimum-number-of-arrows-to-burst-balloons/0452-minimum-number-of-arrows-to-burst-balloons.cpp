class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(begin(points),end(points));
        int n = points.size();
        vector<int> prev = points[0];

        int cnt = 1;

        for(int  i = 1 ; i < n; i++){
            
            int cs = points[i][0];
            int ce = points[i][1];

            int prevs = prev[0];
            int preve = prev[1];

            if(preve  <  cs){
                // no overlapping
                cnt++;
                prev = points[i];
            }
            else{
                //overlapping 
                prev[0] = max(prevs,cs);
                prev[1] = min(preve,ce);

            }
        }
        return cnt;

    }
};