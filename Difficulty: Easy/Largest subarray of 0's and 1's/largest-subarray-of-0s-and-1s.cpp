//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        int maxlen = 0 ;
        int sum = 0;
        map<int,int>mpp;
        mpp[0] = -1;
        for(int i = 0;i < arr.size(); i++){
            if(arr[i] == 0){
                sum += -1;
            }
            else{
                sum += 1;
            }
            if(mpp.find(sum) != mpp.end()){
                int len = i - mpp[sum];
                maxlen = max(maxlen,len);
            }
            
            else{
                mpp[sum] = i;
            }
        }
        
        return maxlen;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line); // Read the whole line for the array

        // Convert the line into an array of integers
        stringstream ss(line);
        vector<int> a;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }

        // Create the solution object
        Solution obj;

        // Call the maxLen function and print the result
        cout << obj.maxLen(a) << endl;
    }

    return 0;
}
// } Driver Code Ends