// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int  n= arr.size();
        vector<int>left(n,1);
        vector<int>right(n,1);
        
        for(int i=1;i< arr.size(); i++){
            left[i] = left[i-1]*arr[i-1];
            // cout<<"left"<<left[i]<<endl;
        }
        
        for(int j = arr.size()-2; j>=0; j--){
            right[j] = right[j+1]*arr[j+1];
            // cout<<"right"<<right[j]<<endl;
        }
        vector<int>ans(n,0);
        
        for(int i =0; i< arr.size(); i++){
            ans[i] = left[i]*right[i];
        }
        
        return ans;
    }
};
