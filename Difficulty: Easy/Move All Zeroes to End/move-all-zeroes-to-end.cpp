class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int l = 0 , r = 0;
        int n = arr.size();
        while(r < n){
           if(arr[r] != 0){
               swap(arr[l],arr[r]);
               l++;
           }
           r++;
        }
        
    }
};