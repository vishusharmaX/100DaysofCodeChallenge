class Solution {
public:
    int solve(vector<int>&v, int i , int j){

        if(i+1 == j)
            return 0;
        int mini = INT_MAX;
        for(int k = i+1; k <=j-1;k++){
            mini = min(mini,v[i]*v[j]*v[k] + solve(v,i,k) +solve(v,k,j));
        }

        return mini;

    }
    int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        return solve(values,0,n-1);
    }
};