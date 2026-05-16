class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        map<int,int>mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        vector<vector<int>>ans;
        map<int,int>mpp1;
        for(int i = 0; i < arr.size(); i++){
            vector<int>temp;
            if(mpp1.find(arr[i]) == mpp1.end()){
                mpp1[arr[i]]++;
                int val = mpp[arr[i]];
                temp.push_back(arr[i]);
                temp.push_back(val);
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};