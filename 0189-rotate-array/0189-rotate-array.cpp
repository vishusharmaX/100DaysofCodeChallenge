class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        int n = arr.size();
        k = k%n;
        k =  n -k ;
        if(arr.size()<=1)
        return;
        reverse(arr.begin() ,arr.begin()+k);
        reverse(arr.begin()+k , arr.end());
        reverse(arr.begin(),arr.end());    
    }
};