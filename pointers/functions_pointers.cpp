#include<iostream>
using namespace std;

void print(int *p){
    cout<< *p << endl;
}

void update (int  *p){
    //  p = p + 1;
    //  cout<< p << endl;
    *p = *p + 1;
}

// both int arr[] = int *arr are equal... in back the code the array pass a pointer not as an array 
int getSum(int *arr, int n){
    // cout<< "Size is" << sizeof(arr) <<endl;

    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    return sum ;
}


int main(){

    int value = 5 ;
    int *p = &value;

    // print(p);
    cout<<"Before "<<*p<<endl;
    update(p);
    cout<<"After "<<*p<<endl;

    int arr[10] ={1,2,3,4,5,8};

    cout<<"Sum is "<<getSum(arr+3,3)<<endl;

   return 0;
}