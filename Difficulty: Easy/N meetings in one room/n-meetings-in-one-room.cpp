//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


bool comp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}



class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        
        vector<pair<int,int>>timer;
        for(int i = 0; i < start.size();i++)
        timer.push_back({start[i],end[i]});
        
        sort(timer.begin(),timer.end(),comp);
        
        
        int total = 0;
        int ending = -1;
        
        for(int i =0 ; i < timer.size(); i++){
            if(timer[i].first > ending){
                total++;
                ending = timer[i].second;
            }
        }
        
        
        return total;
        
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
        vector<int> start;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            start.push_back(num);
        }

        vector<int> end;
        getline(cin, input);
        stringstream s22(input);
        while (s22 >> num) {
            end.push_back(num);
        }

        Solution ob;
        int ans = ob.maxMeetings(start, end);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends