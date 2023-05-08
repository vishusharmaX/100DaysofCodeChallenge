#include<iostream>
using namespace std;

void print(int arr[], int n)
{
    cout<<"Size of the Array is  : "<<n<<endl;
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}   

bool  search(int arr[], int size, int key){
    print(arr,size);
    //base case 
    if(size == 0){
        return false;
    };
    //recursive case
    if(arr[0]==key){
        return true;
    }

    else {
        bool remainPart = search(arr+1,size-1,key);
        return remainPart;
    }
}

int main(){
    
    int arr[5] = {3,5,1,2,6};
    int key = 2;
    int size = 5;
    bool ans = search(arr,size,key);
    if(ans==1){
    cout<<"Element is Present"<<endl;
    }
    else{
        cout<<"Element is not Present"<<endl;
    }
    return 0;
}