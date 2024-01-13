//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
    if (a.length() != b.length()) {
        return false; 
    }

    unordered_map<char, int> mpp1;
    unordered_map<char, int> mpp2;

    for (auto it : a) mpp1[it]++;
    for (auto it : b) mpp2[it]++;

    return mpp1 == mpp2;
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends