class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        double ans = 0;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        if(n & 1){
            ans = arr[n/2];
        }
        else{
            ans = (double)(arr[n/2] + arr[(n/2) -1])/2;
        }
        
        return ans;
    }
};