//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int dp[1000001];
    int minimalCostRecursion(int index, int k, vector<int> &arr){
        if(index==arr.size()-1){
            return 0;
        }
        
        int minCost = INT_MAX;
        
        if(dp[index] != -1){
            return dp[index];
        }
        for(int i=1; i<=k; i++){
            if(index+i < arr.size()){
                int jumpCost = abs(arr[index]-arr[index+i]) + minimalCostRecursion(index+i, k, arr);
                minCost = min(minCost, jumpCost);
            }
        }
        return dp[index] = minCost;
    }
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        memset(dp, -1, sizeof(dp));
        return minimalCostRecursion(0, k, arr);
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(k, arr);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends