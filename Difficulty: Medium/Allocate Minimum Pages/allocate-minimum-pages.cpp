//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int solve(vector<int>&arr, int k , int mid){
        int pagesum = 0;
        int cnt = 1;
        
        for(int i = 0; i < arr.size(); i++){
            if(pagesum + arr[i] <= mid){
                pagesum += arr[i];
            }
            else{
                cnt++;
                if(cnt > k || arr[i] > mid){
                    return false;
                }
                pagesum = arr[i];
            }
        }
        
        return true;
    }
  
    int findPages(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        if(k > n) return -1;
        
        int sum = accumulate(arr.begin(),arr.end(),0);
        int s = 0;
        int e = sum;
        int ans = 0;
        int mid = s + (e-s)/2;
        while(s<=e){
            if(solve(arr,k,mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid +1;
            }
            mid = s + (e-s)/2;
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends