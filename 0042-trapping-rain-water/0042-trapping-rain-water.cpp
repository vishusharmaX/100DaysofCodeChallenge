class Solution {
public:
    vector<int> solve(vector<int>& arr){
        vector<int>newarr(arr.size(), 0);
        int maxi = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
            newarr[i] = maxi;
        }
        return newarr;
    }
    vector<int> solve1(vector<int>& arr){
        vector<int>newarr(arr.size(), 0);
        int maxi = arr[arr.size()-1];
        for(int i = arr.size()-2; i >=0 ; i--){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
            newarr[i] = maxi;
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
            int a = h-w;
            if(a >= 0){
                cnt += a;
            }
        }

        return cnt;
    }
};