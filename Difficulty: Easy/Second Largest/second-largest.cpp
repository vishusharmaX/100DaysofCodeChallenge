//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        int largest=arr[0];
        int slargest=-1;
        for(int j=0;j<arr.size();j++){
            if(arr[j]>largest){
                largest=arr[j];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]>slargest && arr[i]!=largest){
                slargest=arr[i];
            }
        }
        return slargest;
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
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends