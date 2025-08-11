// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int maxiindex = 0;
        int maxi = 0;
        
        for(int i = 0; i<arr.size(); i++){
            int onecnt = 0;
            for(int j = 0; j < arr[0].size(); j++){
                if(arr[i][j] == 1){
                    onecnt++;
                }
            }
            if(onecnt > maxi){
                maxi = max(maxi,onecnt);
                maxiindex = i;
            }
        }
        
        return maxiindex;
        
    }
};