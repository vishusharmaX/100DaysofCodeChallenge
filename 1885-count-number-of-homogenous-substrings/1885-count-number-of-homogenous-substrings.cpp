class Solution {
public:
    int countHomogenous(string s) {
        int mod = 1e9 + 7, homStrCnt = 0;
        int chrFreq = 0;
        char prevChr = 'A';
        for(auto curChr : s){
           if(curChr == prevChr)chrFreq++;
           else chrFreq = 1;
           homStrCnt = (homStrCnt % mod + chrFreq % mod)%mod;
           prevChr =  curChr;
        }
        return homStrCnt;
    }
};