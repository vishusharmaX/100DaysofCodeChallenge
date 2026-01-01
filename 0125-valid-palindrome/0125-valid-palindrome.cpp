class Solution {
public:
    bool solve(string t){
        int i = 0 , j = t.length()-1;

        while(i<= j){
            if(t[i] != t[j]){
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
    bool isPalindrome(string s) {
        string t;
        for (char c : s) {
            if (isalnum(c)) {
                t += tolower(c);
            }
        }
        return solve(t);

    }
};