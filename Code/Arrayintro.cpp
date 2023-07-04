#include<iostream>
using namespace std;

void printArray(int arr[] , int size ){

    cout<<"Printing the Array"<<endl;
    //   int size;
      for(int i =0 ; i<size; i++){
        cout<<arr[i]<<" ";

    }
    cout<<"Printing done "<<endl;


}

int main(){

    int number[15];
    
    //accessing array and without giving the input so it through garbage value
    cout<<"Value at the index 14 is "<<number[14]<<endl;
    
    // cout<<"Value at the index 20 is "<<number[20]<<endl;

    int second[3] = {5,7,11};

    cout<<endl<<"Value at 2 index "<<second[2]<<endl;

    int third[15] = {2,7};

    int thirdsize = sizeof(third)/sizeof(int);
    cout<<"Size of third is "<<thirdsize<<endl;

    // int n =15; 
    // for(int i =0 ; i<n; i++){
    //     cout<<third[i]<<" ";

    // }
    printArray(third, 15);
    cout<<endl;
    
    // Intializing all location with 0
    int fourth[10] = {0};

    // int a =10;
    // for(int i =0 ; i<a; i++){
    //     cout<<fourth[i]<<" ";

    // }

    printArray(fourth, 10);

    // int fourthsize = sizeof(fourth)/sizeof(int);
    // cout<<"Size of fourth is "<<fourthsize<<endl;



    char ch[5] = {'a', 'b','c','r','p'};
    cout<<ch[3]<<endl;
    for(int i =0 ; i<5; i++){
        cout<<ch[i]<<endl;
    }

    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[9];
    cout<<endl;
    cout<<endl;




    cout<<endl<<" Everything is fine "<<endl;

     
    
}
