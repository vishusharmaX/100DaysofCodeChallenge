//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string oddEven(string s) {
        // code here
        int n = s.size() , x = 0 , y = 0 ;
        
        vector<int>freq(27);
        
        for(auto ch : s){
            freq[(ch-'a')+1]++;
        }
        for(int i = 0 ; i < freq.size(); i++){
            if(freq[i] > 0){
                if(i%2 == 0 and freq[i] %2 ==0)
                    x++;
                 else if(i % 2 != 0 and freq[i] % 2 != 0)
                    y++;
            }
        }
        
        return (x+y)%2 == 0 ? "EVEN" : "ODD";
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends