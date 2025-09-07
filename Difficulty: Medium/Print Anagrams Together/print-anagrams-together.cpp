// User function Template for C++

class Solution {
  public:
    vector<pair<string,int>>ans;
    map<int,string>mpp;
    void solve(string s,int indx){
        sort(s.begin(),s.end());
        ans.push_back({s,indx});
    }
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        vector<vector<string>>res;
        for(int i = 0; i < arr.size(); i++){
            mpp[i] = arr[i];
            solve(arr[i],i);
        }
        sort(ans.begin(),ans.end());
        int i = 0;
        while (i < ans.size()) {
            vector<string> temp;
            string current_key = ans[i].first;
            while (i < ans.size() && ans[i].first == current_key) {
                temp.push_back(mpp[ans[i].second]);
                i++;
            }
            
            res.push_back(temp);
        }
        return res;
    }
};