#include<iostream>
using namespace std;

class B {
    public :
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator + (B &obj){
        // int value1= this->a;
        // int value2= obj.a;
        // cout<<"Output"<<value2-value1<<endl;

        cout<<"Hello Babbar"<<endl;
    }

    void operator()(){
        cout<<"main bracket hu"<<this->a<<endl;
    } 
};

class Animal {

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};
class Dog : public Animal{

    public:
    // void speak(){
    //     cout<<"Barking"<<endl;
    // }

};

int main(){

    Dog obj;
    obj.speak();

/*
    B obj1,obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1+obj2;
    obj1();
    return 0;
*/
}