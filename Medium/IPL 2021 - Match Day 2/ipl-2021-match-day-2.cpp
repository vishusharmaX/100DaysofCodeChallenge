//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
        // your code here
        
        vector<int> ans;
        deque<int> dq;
        
        for(int i= 0; i< n ; i++){
            
            while(!dq.empty() && dq.front() <= i-k)
                dq.pop_front();
                
            while(!dq.empty() && nums[i] > nums[dq.back()])
                dq.pop_back();
            
            dq.push_back(i);
            
            if(i >= k-1)
                ans.push_back(nums[dq.front()]);
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends