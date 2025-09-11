class Solution {
  public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K) {
        // Your code goes here
        sort(arr,arr+N,greater<int>());
        
        int i = 0;
        int s = 0;
        
        while(i < N-1){
            int x  = abs(arr[i] - arr[i+1]);
            
            if(x < K){
                s += (arr[i] + arr[i+1]);
                i = i+2;
            }
            else i++;
            
        }
        
        return s;
    }
};