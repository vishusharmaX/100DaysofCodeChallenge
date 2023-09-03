class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int i=0;
        while(i<word1.length()||i<word2.length()){
            if(i<word1.length()){
                s+=word1[i];
            }
            if(i<word2.length()){
                s+=word2[i];
            }
            i++;
        }
        return s;
        
        
    }
};