//{ Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}
// } Driver Code Ends


#include <algorithm> 

bool findPair(int arr[], int size, int n){
    // Sort the array in ascending order
   sort(arr, arr + size);

    int i = 0;
    int j = 1; 
    while (j < size) {
        if (arr[j] - arr[i] == n)
            return true;
        else if (arr[j] - arr[i] < n)
            j++;
        else
            i++;
        
        if (i == j)
            j++;
    }

    return false;
}
