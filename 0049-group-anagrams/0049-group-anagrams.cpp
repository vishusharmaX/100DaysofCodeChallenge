class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string,vector<string>>mpp;
        vector<vector<string>>ans;

        for(auto it: strs){
            string temp = it;
            sort(temp.begin(),temp.end());
            mpp[temp].push_back(it);
        }

        for(auto it : mpp){
            vector<string>temp = it.second;
            ans.push_back(temp);
        }

        return ans;
    }
};