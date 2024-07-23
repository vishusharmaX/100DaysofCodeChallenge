class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mpp;
        vector<pair<int,int>>v;
        vector<int>ans;
        for(auto it : nums){
            mpp[it]++;
        }

        for(auto it: mpp){
            int value  = it.first;
            int freq = it.second;
            v.push_back({freq,value});
        }
       sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            if (a.first == b.first) {
                return a.second > b.second; 
            }
            return a.first < b.first; 
        });
        for(int i = 0 ; i < v.size(); i++){
            int freq = v[i].first;
            int value = v[i].second;
            while(freq--){
                ans.push_back(value);
            }
        }
        
        return ans;
    }
};