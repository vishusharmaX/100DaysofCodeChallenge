class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int,int>>ans;
        vector<int>finalans;
        for(int i =0 ; i < nums.size(); i++){
            int val = nums[i];
            if (val == 0) {
                ans.push_back({mapping[0], nums[i]});
                continue;
            }
            string s;
            while(val>0){
                int last_digit = val%10;
                val = val/10;
                int newVal = mapping[last_digit];
                s+=to_string(newVal);
            }
            reverse(s.begin(),s.end());
            int intvalue = stoi(s);
            ans.push_back({intvalue,i});
        }
        sort(ans.begin(),ans.end());
        for(int i = 0 ; i < ans.size(); i++){
           finalans.push_back(nums[ans[i].second]);
        }

        return finalans;

    }
};