class Solution {
public:
    vector<int> solve(vector<int>& arr){
        vector<int>newarr(arr.size(), 0);
        newarr[0] = arr[0];
        for(int i = 1; i < arr.size(); i++){
           newarr[i] = max(newarr[i-1] , arr[i]);
        }
        return newarr;
    }
    vector<int> solve1(vector<int>& arr){
        vector<int>newarr(arr.size(), 0);
        newarr[newarr.size()-1] = arr[arr.size()-1];
        for(int i = arr.size()-2; i >=0 ; i--){
            newarr[i] = max(newarr[i+1], arr[i]);
        }
        return newarr;
    }

    int trap(vector<int>& arr) {
        vector<int>leftmax = solve(arr);
        vector<int>rightmax = solve1(arr);
        int cnt = 0;
        for(int i = 0; i < arr.size(); i++){
            int h = min(leftmax[i] , rightmax[i]);
            int w = arr[i];
            cnt += (h-w);
        }

        return cnt;
    }
};