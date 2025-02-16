class Solution {
public:
    bool goBack = false;
    
    void func(int i, vector<int>&ans, vector<bool>&isUsed, int n){
        if( i == (n*2)-1){
            goBack = true;
            return;
        }
        if(ans[i] != 0){
            func(i+1, ans, isUsed, n);
            return;
        }
        for(int num = n; num >= 1; num--){
            if(isUsed[num]) continue;
            if( (num != 1) and (i+num ) > ((n*2)-2)) continue;
            if( (num != 1) and ans[i+num] != 0) continue;
            
            ans[i] = num;
            if(num != 1) ans[i+num] = num; 
            isUsed[num] = true;
             func(i+1, ans, isUsed, n);
             if(goBack) return;
            ans[i] = 0;
            if(num != 1) ans[i+num] = 0;
            isUsed[num] = false; 
        }
        return;
    }

    vector<int> constructDistancedSequence(int n) {
        int size = (n*2) - 1;
        vector<int>ans(size,0);
        vector<bool>isUsed(n+1,false);
        func(0, ans, isUsed, n);
        goBack = false; 
        return ans;
    }
};