//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    // Function to return the sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        int count = 0;
        int x = 0; // variable to track power of 2

        while ((1 << x) <= n) {
            int totalPairs = (n + 1) / (1 << (x + 1));
            int remainingBits = max(0, (n + 1) % (1 << (x + 1)) - (1 << x));

            count += totalPairs * (1 << x) + remainingBits;
            x++;
        }

        return count;
    }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends