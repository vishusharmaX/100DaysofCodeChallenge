//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        int size = arr.size();
        
        vector<int>right_smaller(size,0);
        vector<int>left_smaller(size,0);
        
        stack<int>st;
        for(int i=0;i<size;i++){
            while(!st.empty() && st.top()>=arr[i])st.pop();
            if(!st.empty() && st.top()<arr[i]){
                left_smaller[i]=st.top();
            }
            st.push(arr[i]);
        }
        while(!st.empty())st.pop();

        for(int i=size-1;i>=0;i--){
            while(!st.empty() && st.top()>=arr[i])st.pop();
            if(!st.empty() && st.top()<arr[i]){
                right_smaller[i]=st.top();
            }
            st.push(arr[i]);
        }
        int diff = 0;
        for(int i=0;i<size;i++){
            diff = max(diff,abs(right_smaller[i]-left_smaller[i]));
        }
        return diff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends