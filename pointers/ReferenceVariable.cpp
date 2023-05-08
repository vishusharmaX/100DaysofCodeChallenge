#include<iostream>
using namespace std;

// Bhot hi baad practise h ye karna
// int& func(int a){
//     int num = a ;
//     int& ans = num;
//     return ans;
// }

//Through an Error  
// int* fun(int n){
//     int* ptr = &n;
//     return ptr;
// }

void update2(int& n){
    n++;
}
void update1(int n){
    n++;
}



int main(){
    /*
    int i = 5 ;
    // Creating a Reference variable
    int &j = i ;

    cout<< i << " "<< j <<endl;
    i++;
    cout<<i <<" "<< j<<endl;
    j++;
    cout<< i << " "<< j <<endl;
    */

   int n = 5;
   cout<<"before"<<n<<endl;
   //Reference Value is Created so that the value of n should be increase by 1 
    update2(n);
   cout<<"after"<<n<<endl;

//    fun(n);

    return 0;
}