#include<iostream>
using namespace std;
#define PI 3.14 //this thing don't take memory and it already declared before the compilation

#define min(a,b) (((a)<(b))?(a):(b)) //this is a function like macro

int main(){
    int r =5;
    double pi = 3.14;
    // pi = pi + 1;
    int area = pi *r *r;

    

    cout<< "Area is "<<area<<endl;
    int a = 18;
    int b = 76;
    cout<<"Minimum value is : "<<min(a,b);

    return 0;
}