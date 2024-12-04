class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        int index=0;//Initialise
        for(char c:str1){
            if(index<str2.size() && (c==str2[index]|| (c-'a'+1)%26 + 'a' == str2[index])){
                index++;//Increment if above condition is satisfied
            }
        }
        return index == str2.size();
    }
};