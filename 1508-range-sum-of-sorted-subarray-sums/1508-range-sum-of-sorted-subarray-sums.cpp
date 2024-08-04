class Solution {
public:
    const int mod = 1e9 + 7;
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>arr;
        for(int i = 0; i < n; i++){
            int sum = 0 ; 
            for(int j = i ; j < n; j++){
                sum = (sum + nums[j])%mod;
                arr.push_back(sum);
            }
        }
        sort(arr.begin(),arr.end());
        int sum = 0 ;
        for(int k = left-1; k < right; k++){
            sum += arr[k];
        }

        return sum;

    }
};