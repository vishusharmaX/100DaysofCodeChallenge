class Solution {
  public:
  
    static bool cmp(string a, string b){
        return a + b > b + a;
    }
  
    string findLargest(vector<int> &arr) {
        // code here
        
        vector<string> ans;
        
        for(int i = 0; i < arr.size(); i++){
            ans.push_back(to_string(arr[i]));
        }
        
        sort(ans.begin(), ans.end(), cmp);
        
        string res = "";
        
        for(auto it : ans){
            res += it;
        }
        
        if(res[0] == '0') return "0";
        
        return res;
    }
};