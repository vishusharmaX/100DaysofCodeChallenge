class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int indx = -1;int n = arr.size();
        for(int i = n-2; i >= 0; i-- ){
            if(arr[i] < arr[i+1]){
                indx = i;
                break;
            }
        }
        
        if(indx == -1)sort(arr.begin(),arr.end());
        else{
            
            for(int i = n-1; i >= 0 ; i--){
                if(arr[indx] < arr[i]){
                    swap(arr[indx],arr[i]);
                    break;
                }
            }
            
            sort(arr.begin()+indx+1,arr.end());
            
        }
        
    }
};