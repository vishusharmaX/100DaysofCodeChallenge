class Solution {
public:
    int kthGrammar(int n, int k) {
        
        if(n==1) return 0;

        int half = pow(2,n-2);

        return k<=half ? kthGrammar(n-1,k) : !kthGrammar(n-1,k-half);
    }
};