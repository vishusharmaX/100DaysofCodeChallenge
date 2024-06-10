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
    long long maxTip(int n, int x, int y, vector<int>& arr, vector<int>& brr) {
        // Create a vector to store orders and their respective tips difference
        vector<pair<int, pair<int, int>>> orders;
        
        for (int i = 0; i < n; ++i) {
            orders.push_back({abs(arr[i] - brr[i]), {arr[i], brr[i]}});
        }
        
        // Sort orders based on the absolute difference in descending order
        sort(orders.begin(), orders.end(), greater<pair<int, pair<int, int>>>());
        
        long long totalTip = 0;
        
        for (int i = 0; i < n; ++i) {
            int tipA = orders[i].second.first;
            int tipB = orders[i].second.second;
            
            // Assign order to A if it maximizes the tip and A can still take orders
            if ((tipA >= tipB && x > 0) || y == 0) {
                totalTip += tipA;
                x--;
            }
            // Otherwise, assign order to B if B can take orders
            else if (y > 0) {
                totalTip += tipB;
                y--;
            }
        }
        
        return totalTip;
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