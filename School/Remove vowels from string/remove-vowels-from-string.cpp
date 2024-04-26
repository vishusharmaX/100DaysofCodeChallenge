//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeVowels(string s) 
	{
	    // Your code goes here
	    string final = "";
	    for(int i = 0 ; i < s.length(); i++){
	        if(s[i] == 'a'||s[i]=='e'||s[i]=='i'|| s[i]=='o'||s[i]=='u')
	            continue;
	       else
	        final+=s[i];
	    }
	    
	    return final;
	    
	}
};

//{ Driver Code Starts.


int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s, ch; 

	    getline(cin, s);  
   		
       
   		Solution ob;
   		cout << ob.removeVowels(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends