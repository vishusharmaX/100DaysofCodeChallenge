#include<iostream>
using namespace std;

    bool isPresent(int arr[][3], int target ,int row , int col ){
        for(int row = 0 ; row<3; row++){
        for(int col = 0 ; col<4 ; col++){
            if(arr[row][col]== target){
                return 1;
            };
            
        }
    }
    return 0;
    }

    // // print the sum row wise
    void printSum(int arr[][3],int row , int col ){
        cout<<"Printing the Sum ->"<<endl;
        for(int row = 0 ; row<3; row++){
            int sum = 0 ;
        for(int col = 0 ; col<3 ; col++){
            sum+=arr[row][col];
        }
        cout<<sum << " ";
    }
    }

    // print the sum col wise
    // void printSum(int arr[][3],int row , int col ){
    //     cout<<"Printing the Sum ->"<<endl;
    //     for(int col = 0 ; col<3; col++){
    //         int sum = 0 ;
    //     for(int row = 0 ; row<3 ; row++){
    //         sum+=arr[row][col];
    //     }
    //     cout<<sum << " ":

    // }
    // }

    int largestRowSum(int arr[][3], int row , int col){
        int maxi = INT_MIN;
        int rowIndex = -1;
        for(int row = 0 ; row<3; row++){
        int sum = 0 ;
        for(int col = 0 ; col<3 ; col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    cout<<"the maximum sum is "<<maxi<<endl;
    return rowIndex;
    }
cout<<endl;

int main(){
    
    // 2d Array
    int arr[3][3]; 
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    cout<<"Enter the elements "<<endl;

    // // taking input -> row wise input leta h 
    for(int i = 0 ; i<3; i++){
        for(int j = 0 ; j<3 ; j++){
            cin>>arr[i][j];
        }
    }


    // taking input -> col wise input leta h 
    // for(int i = 0 ; i<4; i++){
    //     for(int j = 0 ; j<3 ; j++){
    //         cin>>arr[j][i];
    //     }
    // }

    cout<<"Printing the Array  : "<<endl;
    // printing the array
    for(int i = 0 ; i<3; i++){
        for(int j = 0 ; j<3 ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    /*
    cout<<"Enter the element to Search"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"Element is Present"<<endl;
    }
    else{
        cout<<"Element is not Present"<<endl;
    }

    printSum(arr,3,3);
    */
   int ansIndex = largestRowSum(arr,3,3);
   cout<<"Max row is at index "<<ansIndex <<endl;

    return 0;
}
