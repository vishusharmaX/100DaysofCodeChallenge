//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void rearrange(vector<int> &arr) {
        vector<int>positive;
        vector<int>negative;
        for(auto i:arr){
            if(i<0) negative.push_back(i);
            else positive.push_back(i);
        }
        int i=0;
        int j=0;
        int index=0;
        while(i<positive.size() && j<negative.size()){
            arr[index++]=positive[i++];
            arr[index++]=negative[j++];
        }
        while(i<positive.size()) arr[index++]=positive[i++];
        while(j<negative.size()) arr[index++]=negative[j++];
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
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        ob.rearrange(arr);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends