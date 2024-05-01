class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ans = 0 ;
        int n = word.size();
        for(int i = 0 ; i < n ; i++){
            if(word[i] == ch){
                ans =  i+1;
                break;
            }
        }

        reverse(word.begin(),word.begin()+ans);
        return word;
    }
};