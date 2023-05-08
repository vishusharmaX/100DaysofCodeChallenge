#include<iostream>
using namespace std;

int main(){
    int num = 5;

    // cout<<num<<endl;

    int *ptr = &num;
    
    // address of operator - &
    
    cout<<"Value  is : "<<*ptr<<endl;
    cout<<"adress of pointer is "<<&ptr<<endl;
    cout<<"adress of num is "<<&num<<endl;
    

    double d = 4.3;
    double *p = &d;

    cout<<"The Address is : "<<p<<endl;
    cout<<"The Value is : "<<*p<<endl;
    cout<<"Size of interger is "<<sizeof(num)<<endl;
    cout<<"Size of pointer is "<<sizeof(p)<<endl;





    return 0;
} 