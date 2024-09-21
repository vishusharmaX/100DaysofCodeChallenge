class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>ans;
        for(int i =1; i <= n; i++){
            ans.push_back(to_string(i));
        }

        sort(ans.begin(),ans.end());
         vector<int>arr;
        for(int i =0; i < n; i++){
            arr.push_back(stoi(ans[i]));
        }
        return  arr;
    }
};