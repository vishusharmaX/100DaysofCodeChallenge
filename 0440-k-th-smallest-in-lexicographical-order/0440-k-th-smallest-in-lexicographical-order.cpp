class Solution {
public:
    int findKthNumber(int n, int k) {
        vector<string>arr;
        for(int i = 1; i <=n; i++){
            arr.push_back(to_string(i));
        }

        sort(arr.begin(),arr.end());


        return stoi(arr[k-1]);

    }
};