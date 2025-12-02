class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
          vector<int>even,odd;
          for(auto it : nums){
                if(it & 1) odd.push_back(it);
                else even.push_back(it);
          }
            int j = 0 , k = 0;
            vector<int>ans;
          for(int i = 0; i < nums.size()/2; i++){
            ans.push_back(even[j++]);
            ans.push_back(odd[k++]);
          }
          return ans;
    }
};