#include<iostream>
using namespace std;


// funtion Signature
void printCounting(int n){
    // function Body
    for (int i =1 ; i<=n ; i++){
        cout<<i<<" ";
    }
}

int main(){

    int n;
    cin>>n;
    // Function Call 
    printCounting(n);
    
    return 0;
}