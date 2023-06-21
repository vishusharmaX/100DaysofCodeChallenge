#include<iostream>
using namespace std;

void print(int arr[], int s ,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


bool binarySearch(int *arr, int s ,int e ,int k){
    print (arr,s,e);
    //base cases

    //element not found
    if(s>e){
        return false;
    }
    int mid = s+(e-s)/2;
    
    //element found
    if(arr[mid]==k){
        return true;
    }
    //recursive case
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr, s , mid-1 ,k);
    }
}

int main(){
    int arr[6] = {2,4,6,10,14,16};
    int size = 6;
    int key = 16;
    bool ans = binarySearch(arr,0,5,key);
    if(ans==0){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"Element is Present"<<endl;
    }
    
    return 0;
}
