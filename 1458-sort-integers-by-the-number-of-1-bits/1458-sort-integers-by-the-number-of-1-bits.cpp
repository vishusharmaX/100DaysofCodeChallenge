class Solution {
public:

    static bool cmp(int &x,int &y){
        int c1 = __builtin_popcount(x) , c2 = __builtin_popcount(y);
        return (c1 == c2 ) ? x<y : c1 < c2;   
    }

    vector<int> sortByBits(vector<int>& v) {
        sort(v.begin(),v.end(),cmp);
        return v;
    }
};