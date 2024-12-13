//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
    return (a.first * b.second > b.first * a.second);
}

class Solution {
public:
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int w) {
        // Create an array of pairs (value, weight)
        vector<pair<int, int>> arr;
        for (int i = 0; i < val.size(); i++) {
            arr.push_back({val[i], wt[i]});
        }
        
        // Sort the items by their value-to-weight ratio in descending order
        sort(arr.begin(), arr.end(), comp);
        
        double profit = 0;
        int i = 0;
        
        // Process each item
        while (w > 0 && i < arr.size()) {
            double value = arr[i].first;
            double weight = arr[i].second;  // Changed this variable name to avoid conflict with parameter 'wt'
            
            if (w >= weight) {
                profit += value;  // Take the whole item
                w -= weight;  // Decrease the remaining capacity
            } else {
                // Take the fractional part of the item
                double temp = value / weight;  // Value per unit weight
                profit += temp * w;  // Add the value of the fraction
                w = 0;  // Knapsack is full
            }
            i++;
        }
        
        return profit;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    // taking testcases
    cin >> t;
    cin.ignore(); // to ignore the newline after the number of test cases
    cout << setprecision(6) << fixed;

    while (t--) {
        // Reading the value array
        vector<int> values;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            values.push_back(number);
        }

        // Reading the weight array
        vector<int> weights;
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            weights.push_back(number);
        }

        // Reading the capacity
        int w;
        cin >> w;
        cin.ignore(); // to ignore the newline after capacity

        // function call
        Solution ob;
        cout << ob.fractionalKnapsack(values, weights, w) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends