class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        map<int,int>mpp;
        for(auto it : nums){
            mpp[it]++;
        }

        for(int i = k ; ;  i+=k){
            cout<<i<<endl;
            if(mpp.find(i) == mpp.end()){
                return i;
            }
    
        }

        return 0;
    }
};