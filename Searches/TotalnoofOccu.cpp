#include<iostream>
using namespace std;

int FirstOccu(int arr[], int n , int key){
    int s = 0 ;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1 ;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e  = mid-1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int lastOccu(int arr[], int n , int key){
    int s = 0 ;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1 ;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int arr[6] = {1,2,3,3,3,5};

    cout<<"First Occurence  of 3 is at index "<<FirstOccu(arr,6,3)<<endl;
    cout<<"last Occurence  of 3 is at index "<<lastOccu(arr,6,3)<<endl;
    cout<<"Total No of Occurence of 3  is "<<(lastOccu(arr,6,3)-FirstOccu(arr,6,3))+1;

    
}