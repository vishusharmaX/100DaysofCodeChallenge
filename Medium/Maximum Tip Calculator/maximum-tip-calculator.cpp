//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
        vector<pair<int, pair<int, int>>>ans;
        long long totaltip = 0;
       for (int i = 0; i < n; ++i) {
            ans.push_back({abs(arr[i] - brr[i]), {arr[i], brr[i]}});
        }
        
        sort(ans.begin(),ans.end(),greater<pair<int, pair<int, int>>>());
        
        for(int i = 0 ; i < ans.size(); i++){
            
            long long tipA = ans[i].second.first;
            long long tipB = ans[i].second.second;
            
            if((tipA>=tipB && x > 0) || y==0){
                totaltip +=tipA;
                x--;
            }
            else{
                totaltip+=tipB;
                y--;
            }
            
        }
        
        return totaltip;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends