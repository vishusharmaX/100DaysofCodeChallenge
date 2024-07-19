//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int i = 0 , j = 0 ;
	    int ans = 0 ;
	    int count = 0 ;
	    int n = txt.length();
	    int k = pat.length();
	    unordered_map<char,int>mpp;
	    for(char it : pat){
	        mpp[it]++;
	    }
	    count = mpp.size();
	    while(j < n){
	       // cout<<txt[j]<<" "<<mpp[txt[j]]<<endl;
	        if(mpp.find(txt[j])!= mpp.end()){
	            mpp[txt[j]]--;
	           if(mpp[txt[j]] == 0){
	            count--;
	           }
	        }
	       // cout<<txt[j]<<" "<<mpp[txt[j]]<<endl;
	      
	       // cout<<count<<endl;
	        
	        if(j-i+1 == k){
	            if(count == 0){
	                ans++;
	               // cout<<"ANS "<< ans<<endl;
	            }
	             if(mpp.find(txt[i]) != mpp.end()){
	                mpp[txt[i]]++;
	               if(mpp[txt[i]] == 1){
	                count++;
	               }
	             }
	            i++;
	        }
	        j++;
	    }
	    
	    return ans;
	}

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends