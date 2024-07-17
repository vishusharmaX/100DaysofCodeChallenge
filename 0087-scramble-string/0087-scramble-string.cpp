class Solution {
public:
    unordered_map<string, int> mpp;
    bool solve(string a, string b){
        if(a.compare(b) == 0)
            return true;
        
        if(a.length() <= 1)
            return false;

        string temp = a + "_" + b;
        
        if(mpp.find(temp) != mpp.end())
            return mpp[temp];

        int n = a.length();
        bool flag = false;
        for(int i = 1 ; i <=n-1; i++ ){
            bool ans1 = (solve(a.substr(0,i),b.substr(n-i,i)) && solve(a.substr(i,n-i),b.substr(0,n-i)));
            bool ans2 = (solve(a.substr(0,i),b.substr(0,i)) && solve(a.substr(i,n-i),b.substr(i,n-i)));

            if(ans1 || ans2){
                flag = true;
            }
        }

        return mpp[temp] = flag;


    }
    bool isScramble(string s1, string s2) {
        int  n = s1.length();
        int m = s2.length();
        if(n != m)
            return false;

        return solve(s1,s2);
    }
};