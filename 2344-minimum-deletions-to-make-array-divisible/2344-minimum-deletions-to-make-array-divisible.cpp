class Solution {
public:
    int gcd(int a , int b){
        if(b == 0)
            return a;

        return gcd(b,a%b);
    }

    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        sort(nums.begin(),nums.end());

        int finalgcd = numsDivide[0];
        for(int i = 1; i < numsDivide.size(); i++){
            finalgcd = gcd(finalgcd,numsDivide[i]);
        }

        for(int i = 0;i<nums.size(); i++){
            if(finalgcd % nums[i] == 0)
                return i;
        }

        return -1;
    }
};