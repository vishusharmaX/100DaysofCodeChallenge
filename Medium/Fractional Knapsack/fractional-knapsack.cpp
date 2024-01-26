//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
public:
    static bool comp(Item a, Item b) 
    {
        return ((double) a.value / a.weight) > ((double) b.value / b.weight);   
    }

    double fractionalKnapsack(int w, Item arr[], int n)
    {
        sort(arr, arr + n, comp);
        double maxP = 0, currWt = 0;
        
        for(int i = 0; i < n; i++) 
        {
            if(currWt + arr[i].weight <= w) 
            {
                maxP += arr[i].value;
                currWt += arr[i].weight;
            }
            else
            {
                maxP += double((arr[i].value * (w - currWt)) / arr[i].weight);
                break;
            }
        }
        
        return maxP;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends