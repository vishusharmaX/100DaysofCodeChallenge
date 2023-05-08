#include<iostream>
using namespace std;

    class A {
        public :
        void func(){
            cout<<"Func of A"<<endl;
        }
    };
    class B {
        public :
        void func(){
            cout<<"Func of B"<<endl;
        }
    };
    class C : public A , public B {
        public :
        void func1(){
            cout<<"Func of C"<<endl;
        }
    };


int main(){

    C obj;
    //If u inherit the two classes and having same function in it so u haven't use like this;
    // obj.func();
    obj.A::func();
    obj.B::func();
    return 0;
}