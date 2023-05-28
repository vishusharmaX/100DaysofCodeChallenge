#include<iostream>
using namespace std;

class Student{
    private :
    string name;
    int age=10;
    int height;

    public :
    int getAge(){
        return this->age;
        cout<<endl;
    }

};

int main(){
    Student first;
    cout<<first.getAge()<<endl;
    cout<<"Sab Sahi chal raha h "<<endl;
    return 0;
}
