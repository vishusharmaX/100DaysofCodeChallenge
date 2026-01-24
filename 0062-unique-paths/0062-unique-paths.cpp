class Solution {
public:
    int solve(int n , int m){
        if(n == 1 || m== 1){
            return 1;
        }

        return solve(n,m-1) + solve(n-1,m);
    }

    int uniquePaths(int m, int n) {
        
        return solve(n,m);
    }
};