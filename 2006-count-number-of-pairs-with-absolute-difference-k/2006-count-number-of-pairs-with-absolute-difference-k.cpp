class Solution {
public:
    int countKDifference(vector<int>& arr, int k) {
    unordered_map<int, int> freq;
    int cnt = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        cnt += (freq[arr[i]-k] + freq[arr[i] +k]);
        freq[arr[i]]++;
    }

    return cnt;
    }
};