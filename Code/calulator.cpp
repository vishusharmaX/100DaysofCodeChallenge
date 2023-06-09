#include<iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;

    char op;
    cout<< "Enter the operation u want to use : ";
    cin>>op;

    switch (op)
    {
    case '+' :cout<<"Value of a + b is : "<<a+b<<endl; 
        break;
    case '*' :cout<<"Value of a * b is : "<<a*b<<endl; 
        break;
    case '/' :cout<<"Value of a / b is : "<<a/b<<endl; 
        break;
    case '-' :cout<<"Value of a - b is : "<<a-b<<endl; 
        break;
    case '%' :cout<<"Value of a % b is : "<<a%b<<endl; 
        break;
    
    default: cout<<"Enter Correct input";
        break;
    }

    cout<<endl
    return 0;
}
