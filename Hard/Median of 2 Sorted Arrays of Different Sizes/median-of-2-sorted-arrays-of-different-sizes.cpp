//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

#include <vector>
using namespace std;

class Solution {
public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2) {
        int n = array1.size();
        int m = array2.size();
        int total = n + m;
        
        int i = 0, j = 0;
        int prev = 0, curr = 0;
        
        for (int count = 0; count <= total / 2; count++) {
            prev = curr;
            if (i < n && (j >= m || array1[i] < array2[j]))
                curr = array1[i++];
            else
                curr = array2[j++];
        }
        
        if (total % 2 == 0)
            return (prev + curr) / 2.0;
        else
            return curr;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends