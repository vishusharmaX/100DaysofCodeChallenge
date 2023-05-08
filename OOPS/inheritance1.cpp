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

int main(){
    
    Dog d;
    d.speak();
    cout<<d.age<<endl;

    return 0;
}