class Solution {
  public:
    int maxOnes(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size() , ans = 0;
        int i = 0 , j = 0;
        while(j < n){
            if(arr[j++] == 0)
                k--;
            while(k < 0){
                if(arr[i++] == 0)
                    k++;
            }
            ans = max(ans , j - i);
        }
        return ans;
        
    }
};
