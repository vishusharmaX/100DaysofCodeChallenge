#include<iostream>
using namespace std;

int main(){
    
    // pow(a,b)

    int a, b;
    cin>>a>>b;

    int ans =1;

    for(int i =1; i<=b ; i++){
        ans = ans*a;
        
    }
    cout<<"Answer is "<<ans;


    int c, d;
    cin>>c>>d;

    ans =1;

    for(int i =1; i<=d ; i++){
        ans = ans*c;
        
    }
    cout<<"Answer is "<<ans;


    return 0;
}   