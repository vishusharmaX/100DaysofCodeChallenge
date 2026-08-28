class Solution {
public:
    char midchar = '$';
    string res = "";
     int halflen = 0;
    bool solve(string curr , vector<int>&count , string target , int i , bool isgreater){
        if(i == halflen){
            string lefthalf = curr;
            string righthalf = curr;
            reverse(righthalf.begin(),righthalf.end());

            if(midchar != '$'){
                lefthalf += midchar;
            }
            lefthalf += righthalf;

            if(lefthalf > target){
                res = lefthalf;
                return true;
            }

            return false;

        }


        for(char ch  = 'a' ; ch <= 'z' ; ch++){

            if(count[ch - 'a'] == 0)continue;

            if( !isgreater && ch < target[i])continue;

            curr.push_back(ch);
            count[ch-'a']--;

            bool greater = isgreater || ch > target[i];

            if(solve(curr,count,target,i+1,greater)){
                return true;
            }


            curr.pop_back();
            count[ch-'a']++;
        }


        return false;

    }
    string lexPalindromicPermutation(string s, string target) {
        vector<int>count(26,0);
        int n = s.length();

        for(int i = 0; i < s.length(); i++){
            count[s[i] - 'a']++;
        }

        int oddcount = 0;

        for(int i = 0; i < 26; i++){
            if(count[i] % 2 == 1){
                oddcount+=1;
                midchar = i + 'a';
            }
        }

        if(oddcount > 1){
            return "";
        }

        for(int  i= 0;  i < 26 ; i++){
            count[i] /= 2;
        }

        halflen = n/2;

        string curr = "";

        solve(curr, count, target, 0 , false);

        return res;
    }
};