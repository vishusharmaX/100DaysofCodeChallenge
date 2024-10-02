class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
       vector<int>temp = arr;
       sort(arr.begin(),arr.end());
       map<int,int>mpp;
       int rank = 1;
      
        for(int i = 0; i <arr.size(); i++){
            if(mpp.find(arr[i]) == mpp.end()){
                mpp[arr[i]] = rank;
                rank++;
            }
        }

        vector<int>ans;
        for(int i = 0; i<temp.size(); i++){
            ans.push_back(mpp[temp[i]]);
        }

        return ans;

        return arr;

    }
};