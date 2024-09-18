class Solution {
public:
    vector<int>solve(vector<int>&nums){
        vector<int>ans;
        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            while(num > 0){
                int last_digit  = num%10;
                ans.push_back(last_digit);
                num/=10;
            }
        }

        return ans;
    }
    bool static comp(string a , string b){
        if(a + b > b+a)
            return true;
        
        else
            return false;
    }
    string largestNumber(vector<int>& nums) {
        string s;
        vector<string>ans;
        for(int i = 0; i < nums.size(); i++){
            ans.push_back(to_string(nums[i]));
        }
        sort(ans.begin(),ans.end(),comp);
        for(int i = 0; i < ans.size(); i++){
            s+=(ans[i]);
        }

        return s;
    }
};