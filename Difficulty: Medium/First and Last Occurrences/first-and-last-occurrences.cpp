//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int solve1(vector<int>&arr, int x){
        int n = arr.size();
        int s = 0 , e = n-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
            if(arr[mid] == x){
                ans = mid;
                e = mid -1;
            }
            else if(arr[mid] > x){
                e = mid -1;
            }
            else{
                s = mid +1;
            }
            mid = s + (e-s)/2;
        }
        
        return ans;
        
    }
    int solve2(vector<int>&arr, int x){
        int n = arr.size();
        int s = 0 , e = n-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
            if(arr[mid] == x){
                ans = mid;
                s = mid + 1;
            }
            else if(arr[mid] > x){
                e = mid -1;
            }
            else{
                s = mid +1;
            }
            mid = s + (e-s)/2;
        }
        
        return ans;
        
    }
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int firstoccu = solve1(arr,x);
        int lastoccu = solve2(arr,x);
        
        return {firstoccu,lastoccu};
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
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends