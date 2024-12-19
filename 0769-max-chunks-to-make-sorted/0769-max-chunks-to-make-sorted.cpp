class Solution {
public:
    int maxChunksToSorted(vector<int>& arr){
        int n = arr.size(), ans = 0, mx = arr[0];
        priority_queue<int> pq;
        for(int i = 0; i < n; i++){
            mx = max(mx, arr[i]);
            pq.push(i);
            if(pq.top() == mx) ans++;
        }
        return ans;
    }
};