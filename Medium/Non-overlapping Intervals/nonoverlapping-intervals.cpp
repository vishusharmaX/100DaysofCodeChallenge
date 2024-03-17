//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minRemoval(int n, vector<vector<int>> &intervals) {
      sort(begin(intervals),end(intervals));
        int i = 0;
        int j = 1;
        int cnt = 0;
        while(j<n){
            vector<int>curr_element = intervals[i];
            vector<int>next_element = intervals[j];

            int cs = curr_element[0];
            int ce = curr_element[1];

            int ns = next_element[0];
            int ne = next_element[1];

            if(ce <= ns){//non overlapping
                i = j;
                j++;
            }
            else if(ce <= ne){
                j++;
                cnt++;
            }
            else if(ce > ne){
                i = j;
                j++;
                cnt++;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(N, intervals) << endl;
    }
    return 0;
}
// } Driver Code Ends