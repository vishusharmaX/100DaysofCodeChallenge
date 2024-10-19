class Solution {
public:
    char solve(int len , int k){
        if(len ==1){
            return '0';
        }
        int half = len/2;
        int mid = half+1;
        if(k == mid){
            return '1';
        }
        else if(k < mid){
            return solve(half,k);
        }
        else{
            char ans = solve(half,len-k+1);
            return ans == '0' ? '1' : '0';
        }
    }

    char findKthBit(int n, int k) {
        int len = pow(2,n)-1;
        return solve(len,k);
    }
};