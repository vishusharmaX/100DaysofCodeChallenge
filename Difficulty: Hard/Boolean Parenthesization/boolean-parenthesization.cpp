class Solution {
  public:
    map<string,int>mpp;
    int solve(string &s, int i, int j, bool istrue){
        if(i > j) return 0;

        if(i == j){
            if(istrue)
                return s[i] == 'T';
            else
                return s[i] == 'F';
        }
        
         string key = to_string(i) + "_" + to_string(j) + "_" + to_string(istrue);

        if (mpp.find(key) != mpp.end()) return mpp[key];

        int ans = 0;

        for(int k = i+1; k <= j-1; k += 2){
            int lt = solve(s, i, k-1, true);
            int lf = solve(s, i, k-1, false);
            int rt = solve(s, k+1, j, true);
            int rf = solve(s, k+1, j, false);

            if(s[k] == '&'){
                if(istrue)
                    ans += lt * rt;
                else
                    ans += lt * rf + lf * rt + lf * rf;
            }
            else if(s[k] == '|'){
                if(istrue)
                    ans += lt * rt + lt * rf + lf * rt;
                else
                    ans += lf * rf;
            }
            else if(s[k] == '^'){
                if(istrue)
                    ans += lt * rf + lf * rt;
                else
                    ans += lt * rt + lf * rf;
            }
        }

       return mpp[key] = ans;
    }

    int countWays(string &s) {
        return solve(s, 0, s.length()-1, true);
    }
};
