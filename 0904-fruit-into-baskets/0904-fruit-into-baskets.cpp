class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i =0 , j = 0;
        map<int,int>mpp;
        int maxlen = 0;
        int n = fruits.size();
        if(n == 1 && fruits[0])return 1;
        while(j < n){
            mpp[fruits[j]]++;
            if(mpp.size() <= 2){
                maxlen = max(maxlen,j-i+1);
            }

            if(mpp.size() > 2){
                while(mpp.size() > 2){
                    mpp[fruits[i]]--;
                    if(mpp[fruits[i]] == 0){
                        mpp.erase(fruits[i]);
                    }
                    i++;
                }
            }
            j++;
        }

        return maxlen;
    }
};