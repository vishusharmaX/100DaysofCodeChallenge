#include<iostream>
using namespace std;
//Single Level Inheritance
class Animal{
    public :
    int age ;
    int weight;

    public :
    void speak(){
        cout<<"Speaking "<<endl;
    }

};

class Dog: public Animal{
    
};

class GermanSheperd: public Dog {

};

int main(){

    GermanSheperd g;
    g.speak();
    
    // Dog d;
    // d.speak();
    // cout<<d.age<<endl;

    return 0;
}