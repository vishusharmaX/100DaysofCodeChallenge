class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n= nums.size();
        map<int,int>mpp;
        if(n%k != 0)
            return false;

        for(auto it: nums){
            mpp[it]++;
        }
        
        while(!mpp.empty()){
            int curr = mpp.begin()->first;

            for(int i =0; i < k; i++){
                if(mpp[curr+i] == 0)
                    return false;
                
                mpp[curr+i]--;
                if(mpp[curr+i] < 1)
                    mpp.erase(curr+i);
            }
        }

        return true;
    }
};