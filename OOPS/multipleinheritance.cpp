#include<iostream>
using namespace std;
//Single Level Inheritance
class Animal{
    public :
    int age ;
    int weight;

    public :
    void bark(){
        cout<<"Barking "<<endl;
    }

};
class Human{
    public :
    string color;

    public :
    void speak(){
        cout<<"Speaking "<<endl;
    }
};

//Multiple inheritance karte h 

class Hybrid : public Animal, public Human {

    public :
    void sleep(){
    cout<<"Sleeping"<<endl;
}
};


int main(){

    Hybrid obj1;

     obj1.bark();
     obj1.speak()  ;

    
    
    // Dog d;
    // d.speak();
    // cout<<d.age<<endl;

    return 0;
}