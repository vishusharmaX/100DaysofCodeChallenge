class Solution {
public:

    int kadanes(vector<int> &a){

        int n = a.size();

        int curr = 0;
        int ans = INT_MIN;

        for(int i = 0 ; i < n ; i++){

            curr += a[i];

            ans = max(ans, curr);

            if(curr < 0)
                curr = 0;

        }

        return ans;
    }

    int maxAbsoluteSum(vector<int>& a) {
        
        int ans = kadanes(a);

        for(auto &i : a)
            i = -i;

        ans = max(kadanes(a), ans);

        return ans;
    }
};