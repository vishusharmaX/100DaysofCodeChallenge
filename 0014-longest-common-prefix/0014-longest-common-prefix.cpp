class Solution {
public:
    string findCommon(string &common,string s ){
        int i = 0, j = 0;
        string t="";
        while( i < common.length() && j < s.length()){
            if(common[i] == s[j]){
                t.push_back(s[i]);
                i++;
                j++;
            }
            else{
                break;
            }
        }
        return t;
    }
    string longestCommonPrefix(vector<string>& strs) {
        string common = strs[0];
        int n = strs.size();
        for(int i = 1; i < n; i++){
            common = findCommon(common,strs[i]);
        }

        return common == "" ? "" : common;
    }
};