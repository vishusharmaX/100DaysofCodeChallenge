class Solution {
  public:
    int findSubString(string& str) {
        // code here
        map<char,int>mpp;
        for(auto it : str){
            mpp[it]++;
        }
        
        int k = mpp.size();
        map<char,int>mpp1;
        
        int i = 0 , j = 0;
        int mini = INT_MAX;
        while(j < str.length()){
             mpp1[str[j]]++;
             
             while(mpp1.size() == k){
                mini = min(mini,j-i+1);
                mpp1[str[i]]--;
                if(mpp1[str[i]] == 0){mpp1.erase(str[i]);}
                i++;
             }
             
             j++;
        }
        
        return mini;
    }
};