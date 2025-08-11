class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n = arr.size();
        int nooftime = n/k;
        map<int,int>mpp;
        for(auto it : arr){
            mpp[it]++;
        }
        int cnt=  0;
        for(auto it: mpp){
            if(it.second > nooftime){
                cnt++;
            }
        }
        
        return cnt;
    }
};