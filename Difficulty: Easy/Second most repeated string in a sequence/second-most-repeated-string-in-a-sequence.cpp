#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}

class Solution {
  public:
    string secFrequent(string arr[], int n) {
        map<string,int> mpp;
        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }

        vector<pair<string,int>> ans(mpp.begin(), mpp.end());

        sort(ans.begin(), ans.end(), cmp);  // using named comparator

        return ans.size() >= 2 ? ans[1].first : "";
    }
};
