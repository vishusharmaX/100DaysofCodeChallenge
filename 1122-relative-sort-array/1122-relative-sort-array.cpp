class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mpp;
        for(auto it : arr1){
            mpp[it]++;
        }
        vector<int>ans;
        for(int i = 0 ; i < arr2.size(); i++){
            if(mpp.find(arr2[i])!= mpp.end()){
                int val = mpp[arr2[i]];
                while(val>0){
                    ans.push_back(arr2[i]);
                    val--;
                }
                mpp.erase(arr2[i]);
            }
        }

        for(auto it : mpp){
            int val = it.second;
            if(val>0){
                while(val>0){
                    ans.push_back(it.first);
                    val--;
                }
            }
        }

        return ans;


    }
};