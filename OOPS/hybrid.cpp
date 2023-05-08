#include<iostream>
using namespace std;

class A{
    public : 
    int a;

    void func1(){
        cout<<"Func of A"<<endl;
    }
};

class D {
    public : 
    int d ;

    void func4(){
        cout<<"Func of D"<<endl;
    }
};

class B : public A {
    public:
    int b;
    void func2(){
        cout<<"Func of B"<<endl;
    }
};

class C : public A , public D {
    public:
    int c;
    void func3(){
        cout<<"Func of C"<<endl;
    }

};

int main(){

    //A->BC are heirachal inheritance

    A a;
    a.func1();
    B b;
    b.func1();
    b.func2();
    C c;
    c.func1();
    c.func3();

    cout<<endl;
    cout<<endl;

    //AD->C are Multilevel Inheritance

    D d;
    d.func4();

    C c1;
    c1.func1();
    c1.func3();
    c1.func4();
    
    
    return 0;
}