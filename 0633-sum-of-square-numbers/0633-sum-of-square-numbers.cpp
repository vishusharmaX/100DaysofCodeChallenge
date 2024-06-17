class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int i = 0; i * i <= c; i++){
            long long  j = sqrt(c - i * i);
            if(i * i + j * j == c) {
                return true;
            }
        }
        return false;
    }
};
