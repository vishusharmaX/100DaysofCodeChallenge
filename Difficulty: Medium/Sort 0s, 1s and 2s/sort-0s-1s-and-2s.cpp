class Solution {
  public:
    void sort012(vector<int>& arr) {
       int start = 0, mid = 0;
       int end = arr.size()-1;
       
       while(mid <= end){
           if(arr[mid] == 0){
               swap(arr[start], arr[mid]);
               start++;
               mid++;
           }
           
           else if(arr[mid] == 1){
               mid++;
           }
           else{
               swap(arr[mid],arr[end]);
               end--;
           }
           
       }
      
        
    }
};