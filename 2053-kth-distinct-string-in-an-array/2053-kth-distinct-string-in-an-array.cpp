class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mpp;
        for(int i = 0; i < arr.size(); i++){
            mpp[arr[i]]++;
        }
        int i  = 1;
        for(auto it : arr){
            if(mpp[it] == 1){
                if( i == k) return it;
                i++;
            }
        }
        
        return "";
        

    }
};