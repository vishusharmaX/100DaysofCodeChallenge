class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        int n = s.length();

        vector<bool>taken(26,false);
        vector<int>lastindex(26);

        for(int i = 0; i < n; i++){
            char ch  = s[i];
            int val = s[i]-'a';
            lastindex[val] = i;
        }

        string ans;
        for(int i = 0; i < n; i++){
            
            char ch = s[i];

            int indx = ch - 'a';

            if(taken[indx] == true){
                continue;
            }


            while(ans.length() > 0 && ans.back() > ch && lastindex[ans.back()-'a'] > i){
                taken[ans.back()-'a'] = false;
                ans.pop_back();
            }

            ans.push_back(ch);
            taken[indx] = true;

        }

        return ans;



    }
};