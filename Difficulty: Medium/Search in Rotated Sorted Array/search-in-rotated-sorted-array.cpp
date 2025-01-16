//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findPivot(vector<int>&arr){
        int n = arr.size();
        int s = 0 ;
        int e = n - 1;
        int mid = s + (e-s)/2;
        while(s < e){
            if(arr[mid] >= arr[0]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            mid = s + (e-s)/2;
        }

        return s;
    }
    int solve(int s , int e , vector<int>arr, int target){
        int mid = s +(e-s)/2;
        while(s <= e){
            if(arr[mid] == target){
                return mid;
            }
            else if(arr[mid] > target){
                e = mid - 1;
            }
            else{
                s = mid +1;
            }
            mid = s + (e-s)/2;
        }

        return -1;
    }
    int search(vector<int>& arr, int target) {
        
        int pivot = findPivot(arr);
        int n = arr.size();
        int ans = -1;
        if(target >= arr[pivot] && target <= arr[n-1]){
            ans = solve(pivot,n-1,arr,target);
        }
        else{
            ans = solve(0,pivot-1,arr,target);
        }

        return ans;
    
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(arr, key) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends