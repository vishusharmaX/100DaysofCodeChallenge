class Solution {
public:

    void solve(vector<char>& s , int i , int j ){

        if(i>=j){
            return;
        }
        swap(s[i],s[j]);
        i++;
        j--;
        solve(s,i,j);
    }

    void reverseString(vector<char>& s) {
        return solve(s,0,s.size()-1) ;   
    }
};