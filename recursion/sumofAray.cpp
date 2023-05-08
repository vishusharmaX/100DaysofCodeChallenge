#include<iostream>
using namespace std;

int sumofArray(int arr[], int size){
    //base case
    if(size==0){
        return true;
    }
    if(size==1){
        return arr[0];
    }
    //recursive case
    int sum = arr[0] + arr[1];
    // cout<<"Sum is : "<<sum<<endl;
    int remaingPart = sumofArray(arr+2,size-2);
    // cout<<"Remaining Part sum is : "<<remaingPart<<endl;
    int newSum = sum + remaingPart;
    // cout<<"New sum is : "<<newSum<<endl;
    return newSum;
}


int main(){
    int arr[5] = {1,2,3,4,5};
    // int arr[5] = {9};
    int size = 5;
   int ans =  sumofArray(arr,size);
    cout<<"Sum of the Array is : "<<ans;
    return 0;
}