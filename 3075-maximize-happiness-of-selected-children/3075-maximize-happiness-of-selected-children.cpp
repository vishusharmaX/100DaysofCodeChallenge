class Solution {
public:
    long long maximumHappinessSum(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end(),greater<int>());
        long long sum = arr[0];
        int i = 1;
        k = k-1;
        int minus = 1;
        while(k--){
            arr[i] = arr[i]-minus;
            if(arr[i] > 0){
                sum += (arr[i]);
            }
            minus++;
            i++;
        }

        return sum;
    }
};