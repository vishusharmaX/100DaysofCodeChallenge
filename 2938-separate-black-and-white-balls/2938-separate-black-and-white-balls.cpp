class Solution {
public:
    long long minimumSteps(string s) {
        long long count  = 0;
        int last = 0;
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s[i] ==  '0'){
                count += (i-last);
                last++;
            }
        }

        return count;

    }
};