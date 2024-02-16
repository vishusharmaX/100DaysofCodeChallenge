class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mpp;
        vector<int>ans;

        for (auto it : arr){
            mpp[it]++;
        }

        for(auto it : mpp){
            ans.push_back(it.second);
        }

        sort(ans.begin(),ans.end());

        int val = ans.size();
        for(auto i : ans){
            if(i <= k){
                k-=i;
                --val;
            }
            else 
                break;
        }
        return val;

    }
};