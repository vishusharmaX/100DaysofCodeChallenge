class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string s1 = s;
        reverse(s.begin(),s.end());

        if(s1 == s)
            return true;
        
        return false;
    }
};