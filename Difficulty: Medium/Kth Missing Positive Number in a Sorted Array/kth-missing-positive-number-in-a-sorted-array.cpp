class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // code here
        map<int,int>mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        int cnt = 0;
        for(int i = 1; i < 1e8; i++){
            if(mpp.find(i) == mpp.end()){
                cnt++;
                if(cnt == k){
                    return i;
                }
            }
        }
        return -1;
    }
};