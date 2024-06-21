//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        vector<float> store ;
        string x ;
        for(int i=0;i<str.size();i++){
            if(str[i] == '/' || str[i] == ','){
                store.push_back(stoi(x)) ;
                x="" ;
            }
            else
                x+=str[i] ;
        }
        store.push_back(stoi(x)) ;
        int a = store[0],b=store[1] ,c=store[2],d=store[3] ;
        if(store[0]/store[1] > store[2]/store[3])
            return to_string(a)+'/'+to_string(b) ;
        else if(store[0]/store[1] == store[2]/store[3]) 
            return "equal" ;
        else
            return to_string(c)+'/'+to_string(d) ;
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends