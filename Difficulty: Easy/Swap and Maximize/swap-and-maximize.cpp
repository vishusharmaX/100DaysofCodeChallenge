//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
         vector<int> v(arr.size());  // Resize v to the size of arr
    sort(arr.begin(), arr.end());  // Sort the input array
    int i = 0, j = arr.size() - 1;
    int k = 0;
    long long sum = 0;

    // Arrange elements alternately from start and end
    while (i <= j) {
        v[k++] = arr[i++];
        if (i <= j) {
            v[k++] = arr[j--];
        }
    }

    // Calculate the sum of absolute differences
    for (int l = 0; l < v.size() - 1; l++) {
        sum += abs(v[l] - v[l + 1]);
    }

    // Adding the absolute difference between the last and first element
    sum += abs(v[v.size() - 1] - v[0]);

    return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends