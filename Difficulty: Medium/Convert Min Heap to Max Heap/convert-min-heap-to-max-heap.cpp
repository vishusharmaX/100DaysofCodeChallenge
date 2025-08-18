// User function Template for C++

class Solution {
  public:
    void heapify(vector<int>&arr, int N, int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        
        if(left < N && arr[largest] < arr[left]){
            largest = left;
        }
        if(right < N && arr[largest] < arr[right]){
            largest = right;
        }
        
        if(largest != i){
            swap(arr[largest] , arr[i]);
            heapify(arr,N,largest);
        }
        
    }
  
    void convertMinToMaxHeap(vector<int> &arr, int N) {
        
        for(int i = N/2; i>=0 ; i--){
            heapify(arr,N,i);
        }
        
        
        
    }
};
