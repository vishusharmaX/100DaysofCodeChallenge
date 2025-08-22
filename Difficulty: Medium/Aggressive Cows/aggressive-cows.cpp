class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end()); 
        int start = 1;
        int end = abs(arr[n-1] - arr[0]);
        
        int ans = 0;
        while(start<=end){
            int mid = start + (end- start)/2;
            int pos = arr[0] ; int cnt  = 1;
            
            for(int i = 1; i < n; i++){
                if(pos+mid <= arr[i]){
                    cnt++;
                    pos = arr[i];
                }
            }
            
            if(cnt <k){
                end = mid-1;
            }
            else{
                ans = mid;
                start = mid +1;
            }
        }
        
        return ans;
    }
};