#include<iostream>
using namespace std;

int firstOccu(int arr[] , int n , int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e -s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
         else if(arr[mid]<key){
            s = mid+1;
        }
        else if(arr[mid]>key){
            e = mid-1;
        }
        mid = s + (e-s)/2;
       
    }
    return ans ;
}
int lastOccu(int arr[] , int n , int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e -s)/2;
    int ans = -1;
    
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
    return ans ;
}

int main(){
    int even[9] = {1,2,3,3,3,3,3,3,5};
    cout<<"First Occurence of 3  is"<<firstOccu(even,9,3)<<endl;
    cout<<"Last Occurence of  3 is at index"<<lastOccu(even,9,3);

    return 0;
}