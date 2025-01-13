class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mpp;
        map<int,int>mpp2;
        for(auto it : arr){
            mpp[it]++;
        }

        for(auto it : mpp){
            if(mpp2.find(it.second) != mpp2.end()){
                return false;
            }
            mpp2[it.second]++;
        }

        return true;
    }
};