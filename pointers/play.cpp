#include<iostream>
using namespace std;

int main(){
    // pointer to int is created and pointing to garbage address
    // int *p=0;   
    // cout<< *p <<endl;

    // int i = 5;
    // // int *p = &i;
    // int *p=0;
    // p= &i;
    
    // cout<<p<<endl;
    // cout<<*p<<endl;

    int num= 5;
    int a = num ;
    cout<<" a before Value :"<<a<<endl;
    a++;
    cout<<" a After Value :"<<a<<endl;
    // cout<<a<<endl;
    // cout<<num<<endl;

    int *p = &num ;
    cout<<"before Value :"<<num<<endl;
    (*p)++;
    cout<<"After Value :"<<num<<endl;

    // Copying a Pointer 
    int *q =p ;
    cout<<p<<" - "<< q <<endl;
    cout<<*p<<" - "<< *q <<endl;

    // Important Concept 

    int i = 3;
    int *t = &i;
    // cout<< (*t)++ <<endl;
    *t = *t + 1;
    cout<< *t <<endl;
    // (*t)++;
    cout<< "before  t "<< t << endl;
    t = t + 1;
    cout<< "after  t "<< t << endl;  
    

    return 0;
}