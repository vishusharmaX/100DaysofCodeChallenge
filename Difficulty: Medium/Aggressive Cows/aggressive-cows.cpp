//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    bool issolve(vector<int>&arr, int mid , int k){
        int cnt = 1;
        int pos = arr[0];
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] - pos >= mid){
                cnt++;
                if(cnt == k){
                    return true;
                }
                pos=arr[i];
            }
        }
        
        return false;
        
    }
    
    int aggressiveCows(vector<int> &stalls, int k) {

        // Write your code here
        sort(stalls.begin(),stalls.end());
        int maxi = 0;
        for(int i = 0; i < stalls.size(); i++){
            maxi = max(maxi,stalls[i]);
        }
        int s = 0 ;
        int e = maxi;
        int mid = s + (e-s)/2;
        int ans = 0;
        while(s <= e){
            if(issolve(stalls,mid,k)){
                ans = mid;
                s = mid + 1;
            }
            else{
                e = mid -1;
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

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends