//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
bool isEven(string s,int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (isEven(s,n))
           cout << "EVEN\n";
        else
           cout << "ODD\n";
        
    }
    return 0;
}
// } Driver Code Ends


bool isEven(string s, int n) {
    char last_dig = '0';
    
    for(int i = 0; i < n; i++){
        if(s[i] != '.' && s[i] != '0'){
            last_dig = s[i];
        }
    }
    
    if((last_dig-'0') % 2 ==0 )
        return true;
    
    return false;

}
