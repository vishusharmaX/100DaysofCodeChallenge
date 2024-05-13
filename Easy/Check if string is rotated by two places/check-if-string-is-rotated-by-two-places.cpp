//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    
    void rotateclk(string &s){
        int n = s.length();
        char ch = s[0];
        for(int i = 1 ; i < n ; i++){
            s[i-1] = s[i];
        }
        s[n-1] = ch;
    }
    void rotateanti(string &s){
        int n = s.length();
        char ch = s[n-1];
        for(int i = n-2 ; i >=0 ; i--){
            s[i+1] = s[i];
        }
        s[0] = ch;
    }

    bool isRotated(string str1, string str2)
    {
        if(str1.length() != str2.length())
                    return 0;
        string clockwise,anticlockwise;
        clockwise = str1, anticlockwise = str1;
        rotateclk(clockwise);
        rotateclk(clockwise);
        
        if(clockwise == str2)
            return 1;
        
        rotateanti(anticlockwise);
        rotateanti(anticlockwise);
        
        if(anticlockwise == str2)
            return 1;
        
        return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends