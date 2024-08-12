class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int n = word1.length() , m = word2.length();
        bool flag = true;
        int i = 0, j= 0;
        while(i < n && j < m){
            if(flag){
                ans.push_back(word1[i]);
                i++;
                flag = false;
            }
            else{
                ans.push_back(word2[j]);
                j++;
                flag = true;
            }
        }
        while(i < n){
            ans.push_back(word1[i]);
            i++;
        }
        while(j < m){
            ans.push_back(word2[j]);
            j++;
        }

        return ans;
    }
};