//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int leastInterval(int n, int k, vector<char> &tasks) {
        // code here
    vector<int> v(26, 0);
    int count = 0;
    for(auto itr: tasks)
        v[((int) itr)%65]++;
    int maxi = *max_element(v.begin(), v.end());
    for(auto itr: v)
        if (itr == maxi)
            count++;
    int ans = 0;
    ans = (k+1)*(maxi-1)+count;
    return max(ans, n);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<char> tasks(N);
        for (int i = 0; i < N; i++) cin >> tasks[i];

        Solution obj;
        cout << obj.leastInterval(N, K, tasks) << endl;
    }
    return 0;
}
// } Driver Code Ends