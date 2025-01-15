class Solution {
public:
    int minimizeXor(int n1, int n2) {
        int x = __builtin_popcount(n1);
        int y = __builtin_popcount(n2);
        if(x > y){
            int a = x - y;
            for(int i = 0; i < a; i++){
                n1 &= (n1-1);
            }
        }
        else if(y > x){
            int a = y - x;
            for(int i = 0; i < a; i++){
                n1 |= (n1+1);
            }
        }
        return n1;
    }
};