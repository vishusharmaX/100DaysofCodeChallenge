class Solution {
public:
    int maximumSwap(int num) {
        
        string s = to_string(num);
        vector<int>nums;
        for(int i = 0; i < s.length(); i++){
            nums.push_back(s[i]-'0');
        }
        int n = nums.size();
        vector<int>arr(n,0);
        int maxi = n-1;
        for(int i = n-1;i>=0; i--){
            if(nums[i] > nums[maxi]){   
                maxi = i;
            }
            arr[i] = maxi;
        }
        int value , idx;
        for(int i = 0; i < nums.size(); i++){
            value = nums[i];
            idx = arr[i];
            if(value < nums[idx]){
                swap(nums[i],nums[idx]);
                break;
            }
        }
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans = 10*ans + nums[i];
        }


        return ans;

    }
};