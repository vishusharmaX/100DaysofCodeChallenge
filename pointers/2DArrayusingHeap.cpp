#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;

    int col ;
    cin>>col;

    //Creating a 2D Array
    int ** arr = new int*[row];

    for(int i= 0 ; i<row; i++){
        arr[i]= new int[col];
    }
    //creation done


    //taking input 
    for(int i = 0 ;i<row ;i++){
        for(int j =0; j<col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //taking output 
    for(int i = 0 ;i<row ;i++){
        for(int j =0; j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing the memory
     for(int i= 0 ; i<row; i++){
       delete []arr[i];
    }

    delete []arr;

    //how to create a 2D  Array dynamically 
    //input/output
    //memory realease kaise karni h 

    return 0;
}