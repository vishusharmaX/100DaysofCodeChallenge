//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> nums, int n, int k) {
        // your code here
        int i = 0,j= 0;
        vector<int>ans;
        deque<int>dq;
        while(j <n){
            while(!dq.empty() && dq.back() < nums[j]) dq.pop_back();
            dq.push_back(nums[j]);
            if(j-i+1 == k){
                ans.push_back(dq.front());
                if(dq.front() == nums[i])dq.pop_front();
                i++;
            }
            j++;
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