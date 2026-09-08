class Solution {
public:
    int countCommas(int n) {
        
        if(n < 1000){
            return 0;
        }

        int muchgrt = n-1000;

        return muchgrt+1;
    }
};