class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        map<int,int>mpp;
        int n = nums.size();
        vector<string>result(n);
        for(int i = 0 ; i < nums.size(); i++){
            mpp[nums[i]] = i;
        }   

        sort(nums.begin(),nums.end(),greater<int>());
        for(int i = 0 ; i < nums.size(); i++){
            if(i ==0 ){
                int ath = mpp[nums[i]];
                result[ath] = "Gold Medal";
            }
            else if(i == 1 ){
                int ath = mpp[nums[i]];
                result[ath] = "Silver Medal";
            }
            else if(i == 2 ){
                int ath = mpp[nums[i]];
                result[ath] = "Bronze Medal";
            }
            else{
                int ath = mpp[nums[i]];
                result[ath] = to_string(i+1);
            }
        }
        return result;
    }
};