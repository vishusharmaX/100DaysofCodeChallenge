class Solution {
public:
    int minChanges(string s) {
        int n = s.length();

        char ch = s[0];
        int cnt  = 0;

        int changes = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == ch){
                cnt++;
                continue;
            }

            //agar hamara ch match nahi hota tho hume ye karna hoga

            if(cnt%2 == 0){
                cnt = 1;
            }
            else{
                changes++;
                cnt = 0;
            }

            ch = s[i];
        }

        return changes;
    }
};