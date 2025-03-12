class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int lsum = 0, rsum = 0 , maxi = 0;
        for(int i = 0; i <k ; i++){
            lsum += arr[i];
        }

        maxi = lsum;
        int r = arr.size()-1;
        for(int i = k-1; i>=0; i--){
            lsum-=arr[i];
            rsum+=arr[r];
            r--;
            maxi = max(maxi,lsum+rsum);
        }

        return maxi;
    }
};