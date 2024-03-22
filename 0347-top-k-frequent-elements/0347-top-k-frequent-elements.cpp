class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mpp;
        vector<int>ans;
        for(auto it : nums){
            mpp[it]++;
        }

         auto comp = [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        };

        vector<pair<int, int>> sorted_mpp(mpp.begin(), mpp.end());
        sort(sorted_mpp.begin(), sorted_mpp.end(), comp);

        for(int i = 0; i < k; i++){
            ans.push_back(sorted_mpp[i].first);
        }

        return ans;
        
    }
};