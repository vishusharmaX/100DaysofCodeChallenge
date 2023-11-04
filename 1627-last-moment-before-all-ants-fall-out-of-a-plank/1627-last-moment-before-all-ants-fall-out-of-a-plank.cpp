class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
       int maximum_Left_time = -1e9;
        if(left.size())maximum_Left_time =  *max_element(left.begin() , left.end());
        int min_Right_time = 1e9;
        if(right.size()) min_Right_time =  *min_element(right.begin() , right.end());
        return max(maximum_Left_time , n-min_Right_time);
    }
};