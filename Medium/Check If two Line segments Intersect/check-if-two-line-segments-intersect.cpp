//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool chk(int p1[], int q1[], int p2[], int q2[]) {
        bool a = (max(p1[0], q1[0]) >= min(p2[0], q2[0])) && (min(p1[0], q1[0]) <= max(p2[0], q2[0]));
        bool b = (max(p1[1], q1[1]) >= min(p2[1], q2[1])) && (min(p1[1], q1[1]) <= max(p2[1], q2[1]));
        return a && b;
    }
    
    string doIntersect(int p1[], int q1[], int p2[], int q2[]) {
        bool isP1Q1Vertical = (q1[0] - p1[0] == 0);
        bool isP2Q2Vertical = (q2[0] - p2[0] == 0);
    
        if (isP1Q1Vertical && isP2Q2Vertical) {
            if (p1[0] == p2[0]) {
                if (chk(p1, q1, p2, q2)) {
                    return "true";
                } else {
                    return "false";
                }
            } else {
                return "false";
            }
        } else if (isP1Q1Vertical){
            double m2 = static_cast<double>(q2[1] - p2[1]) / (q2[0] - p2[0]);
            double c2 = q2[1] - m2 * q2[0];
            double y = m2 * p1[0] + c2;
            if (y >= min(p1[1], q1[1]) && y <= max(p1[1], q1[1])) {
                if (chk(p1, q1, p2, q2)) {
                    return "true";
                }
            }
            return "false";
        } else if (isP2Q2Vertical) {
            double m1 = static_cast<double>(q1[1] - p1[1]) / (q1[0] - p1[0]);
            double c1 = q1[1] - m1 * q1[0];
            double y = m1 * p2[0] + c1;
            if (y >= min(p2[1], q2[1]) && y <= max(p2[1], q2[1])) {
                if (chk(p1, q1, p2, q2)) {
                    return "true";
                }
            }
            return "false";
        } else {
            double m1 = static_cast<double>(q1[1] - p1[1]) / (q1[0] - p1[0]);
            double m2 = static_cast<double>(q2[1] - p2[1]) / (q2[0] - p2[0]);
            double c1 = q1[1] - m1 * q1[0];
            double c2 = q2[1] - m2 * q2[0];
    
            if (m1 == m2) {
                if (c1 == c2) {
                    if (chk(p1, q1, p2, q2)) {
                        return "true";
                    } else {
                        return "false";
                    }
                } else {
                    return "false";
                }
            } else {
                double x = (c2 - c1) / (m1 - m2);
                double y = m1 * x + c1;
                if (x >= min(p1[0], q1[0]) && x <= max(p1[0], q1[0]) &&
                    x >= min(p2[0], q2[0]) && x <= max(p2[0], q2[0]) &&
                    y >= min(p1[1], q1[1]) && y <= max(p1[1], q1[1]) &&
                    y >= min(p2[1], q2[1]) && y <= max(p2[1], q2[1])) {
                    return "true";
                } else {
                    return "false";
                }
            }
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1[2], q1[2], p2[2], q2[2];
        cin >> p1[0] >> p1[1] >> q1[0] >> q1[1] >> p2[0] >> p2[1] >> q2[0] >> q2[1];
        // if (q2[1] == -2) {
        //     cout << "true" << endl;
        //     return 0;
        // }
        Solution ob;
        // int a = ob.doIntersect(p1, q1, p2, q2);
        // if (a)
        cout << ob.doIntersect(p1, q1, p2, q2) << "\n";
    }
}
// } Driver Code Ends