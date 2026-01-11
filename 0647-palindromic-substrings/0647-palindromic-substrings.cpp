class Solution {
public:
    bool palli(string &s, int i, int j){

        while(i <= j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
    int countSubstrings(string s) {
        int n = s.length();
        map<string,int>mpp;
        int cnt = 0;
        for(int i = 0 ; i < n; i++){
            for(int j = i ; j < n; j++){
                if(palli(s,i,j)){
                    // if(mpp.find(s.substr(i,j-i+1)) == mpp.end()){
                        // mpp[s.substr(i,j-i+1)] = 1;
                        cnt++;
                    // }
                }
                // if(palli(s,j+1,n-1)){
                //     if(mpp.find(s.substr(j+1,n-j-1)) == mpp.end()){
                //         mpp[s.substr(j+1,n-j-1)] = 1;
                //         cnt++;
                //     }
                // }
            }
        }

        return cnt;
    }
};