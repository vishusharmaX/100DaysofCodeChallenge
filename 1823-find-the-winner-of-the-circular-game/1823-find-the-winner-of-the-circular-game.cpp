class Solution {
public:
    int findTheWinner(int n, int k) {
       vector<int>ans(n);
       for(int i = 0 ; i < n; i++){
            ans[i] = i+1;
       }
       int i = 0;
       while(ans.size() > 1){
            int indx = (i+k-1)%ans.size();
            ans.erase(ans.begin()+indx);
            i = indx;
       }
       return ans[0];
    }
};