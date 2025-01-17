class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int>temp(n,0);
        for(int i = 0;i < arr.size(); i++){
            temp[(i+k)%n] = arr[i];
        }

        arr = temp;
    }
};