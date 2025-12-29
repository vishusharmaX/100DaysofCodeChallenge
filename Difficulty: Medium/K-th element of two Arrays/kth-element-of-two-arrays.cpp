class Solution {
  public:
    vector<int> solve(vector<int>&a , vector<int> & b){
        
        int i = 0 , j = 0;
        vector<int>ans;
        while(i < a.size() && j < b.size()){
            
            if(a[i] <= b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
        
         while(i < a.size()){
            ans.push_back(a[i]);
            i++;
        }
        while(j < b.size()){
            ans.push_back(b[j]);
            j++;
        }
        
        return ans;
    }
    
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        vector<int>ans = solve(a,b);
        return ans[k-1];
    }
};