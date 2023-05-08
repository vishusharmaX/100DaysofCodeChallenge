#include<iostream>
using namespace std;

int sumofarray (int arr[], int size){
    int ans =0;
        for(int i =0 ; i<size; i++){
        ans = ans + arr[i];
    }
    return ans;
}

int main(){
    
    int size ;
    int arr[10];
    cin>>size;

    for(int i =0 ; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Sum of the full  array is : "<<sumofarray( arr,size );

    return 0;
}