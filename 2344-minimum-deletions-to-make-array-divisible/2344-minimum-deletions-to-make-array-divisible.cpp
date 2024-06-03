class Solution {
public:
    int gcd(int a,int b){
        if(b == 0)
            return a;
        
        return gcd(b,a%b);
    }
    int minOperations(vector<int>& nums, vector<int>& arr) {
        sort(nums.begin(),nums.end());
        
        int arr_gcd = arr[0];
        for (int i = 1; i < arr.size(); ++i) {
            arr_gcd = gcd(arr_gcd, arr[i]);
        }


       for (int i = 0; i < nums.size(); ++i) {
            if (arr_gcd % nums[i] == 0)
                return i;
        }

        return -1;
    }
};