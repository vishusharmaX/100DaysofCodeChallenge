class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(),arr.end());
        int cnt = 1;
        int maxlen = 0;
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == arr[i-1]){
                continue;
            }
            else if(arr[i] == arr[i-1]+ 1){
                cnt++;
            }else{
                
                maxlen = max(maxlen,cnt);
                cnt = 1;
            }
            
        }
        maxlen = max(maxlen, cnt); // check at the end
        return maxlen;
    }
};