class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        map<int,int>mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        
        for(auto it : mpp){
            if(it.second > arr.size()/2){
                return it.first;
            }
        }
        
        return -1;
    }
};