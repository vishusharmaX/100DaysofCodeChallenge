//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
     static bool comp(pair<int, int>& a, pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    }
    
    
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code heres
        // sort(arr.begin(),arr.end());
        map<int,int>mpp;
        vector<int>ans;
        for(auto it : arr){
            mpp[it]++;
        }
        
        int freqcnt = 0;
        
        vector<pair<int,int>>res;
        for(auto it : mpp){
            res.push_back({it.second, it.first});
        }
        
        sort(res.begin(),res.end(),comp);
        
        
        for(int i = 0; i < res.size(); i++){
            int freq = res[i].first;
            int num = res[i].second;
            while(freq--){
                ans.push_back(num);
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends