class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0, j = 0;
        int n = nums.size();
        deque<int>dq;
        vector<int> ans;

        while(j < n) {
           while(!dq.empty() && dq.back() <nums[j]) dq.pop_back();
           dq.push_back(nums[j]);

           if(j-i+1 == k){
                ans.push_back(dq.front());
                if(dq.front() == nums[i])
                    dq.pop_front();
                i++;
           }
           j++;
        }
        
        return ans;
    }
};
