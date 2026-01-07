class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        
        int i = 0 , j = 0;
        vector<int>ans;
        map<int,int>mpp;
        
        while(j < arr.size()){
            mpp[arr[j]]++;
            while(j-i+1> k){
                mpp[arr[i]]--;
                if(mpp[arr[i]] == 0){
                    mpp.erase(arr[i]);
                }
                i++;
            }
            
            if (j - i + 1 == k) {
                ans.push_back(mpp.size());
            }
            j++;

        }
        
        return ans;
    }
};