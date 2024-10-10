//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        // Code here
        int maxi = 0;
        map<int,int>mpp;
        for(int i = 0; i < arr.size(); i++){
            if(mpp.find(arr[i]) != mpp.end()){
                int pos = mpp[arr[i]];
                maxi = max(maxi,i-pos);
            }
            else{
                mpp[arr[i]] = i;
            }
        }
        
        
        return maxi;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);

        stringstream s1(input);
        int num;
        while (s1 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.maxDistance(arr) << endl;
    }
    return 0;
}
// } Driver Code Ends