#include<iostream>
using namespace std;

void PrintArray (int arr[], int n){
    for(int i = 0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void sortOne(int arr[] , int n){
    int left =0 , right =n-1;
    int step = 0;
    while(left<=right && left<right){
        cout<<"step"<< step++ << endl;
        PrintArray(arr,n);
        while(arr[left] == 0){
            left++;

        }
        while(arr[right] == 1 && left<right){
            right--;
        }
        if( left<right){
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        
        
    }
    // sort(arr[left], arr[right]);
}

int main(){
    int arr[8] = {1,1,0,0,0,1,0};
    
    sortOne(arr,8);
    PrintArray(arr,8);
  
}