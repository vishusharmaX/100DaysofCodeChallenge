#include<iostream>
using namespace std;

class A{
    public:
    int a;
    void funcA(){
        cout<<"Func A"<<endl;
    }  
};

class B : public A{

};

class  C : public A{

};


int main(){

    B obj1;
    obj1.funcA();
    C x;
    x.funcA();
    
    return 0;
}