class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i = 0 ; i< nums.size(); i++){
            q.push(nums[i]);
        }
        int  n = q.size() -k;

        while(n>0){
            q.pop();
            n--;
        }

        return q.top();
    }
};