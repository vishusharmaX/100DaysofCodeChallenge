class Solution {
public:
    string solve(string s, string t){

        string temp = "";
        int i = 0, j = 0;
        while(i < s.length() && j < t.length()){
            if(s[i] == t[i]){
                temp += s[i];
            }
            else{
                break;
            }
            i++;
            j++;
            
        }

        return temp;

    }

    string longestCommonPrefix(vector<string>& strs) {
        string common = strs[0];
        for(int i = 1; i < strs.size(); i++){
            common = solve(common,strs[i]);
        }
        return common == "" ? "" :common;
    }
};