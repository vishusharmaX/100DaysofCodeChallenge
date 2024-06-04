class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        if(n == 1)
            return 1;

        unordered_map<char,int>mpp;

        for(int i = 0 ; i < n; i++){
            mpp[s[i]]++;
        }
        int count = 0;
        bool hasodd = false;
        for(auto it : mpp){
            if(it.second %2 == 0){
                count +=it.second;
            }
            else{
                count += it.second-1;
                hasodd = true;
            }
        }

        if(hasodd)
            count+=1;
        
        return count;
        

    }
};