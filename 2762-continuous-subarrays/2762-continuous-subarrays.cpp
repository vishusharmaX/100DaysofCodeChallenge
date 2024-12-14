class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;// min aur max niklane ke liya har bar 

        int i=0,j=0;// Sliding window
        long long count=0;// final answer

        while(j<n){
            mpp[nums[j]]++;
            while(abs(mpp.rbegin()->first-mpp.begin()->first)>2){
                mpp[nums[i]]-=1;
                if(mpp[nums[i]]==0){
                    mpp.erase(nums[i]);
                }
                i++;
            }
            count+=j-i+1;
            j++;
        }
        return count;
    }
};