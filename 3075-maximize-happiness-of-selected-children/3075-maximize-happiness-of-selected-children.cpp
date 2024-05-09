class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0 ;
        sort(happiness.begin(),happiness.end(),greater<int>());
        int count = 0;

        for(int i = 0 ; i < k ; i++){
            sum += max(happiness[i]- count , 0);
            count++;
        }

        return sum;
    }
};