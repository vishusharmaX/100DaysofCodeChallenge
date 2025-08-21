class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
         int n = arr.size();
        if (k > n) return -1;
        int start = 0, end =0;
        for(int i = 0;i < arr.size(); i++){
            start = max(start, arr[i]);
            end += arr[i];
        }
        int ans = -1;
        while(start <= end){
            int mid = start + (end-start)/2;
            int pages = 0 , cnt = 1;
            
            for(int i = 0;i < n; i++){
                pages += arr[i];
                if(pages > mid){
                    cnt++;
                    pages = arr[i];
                }
            }
            
            if(cnt <= k){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid +1;
            }
            
        }
        
        return ans;
    }
};