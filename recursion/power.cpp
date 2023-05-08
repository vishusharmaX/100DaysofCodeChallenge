#include<iostream>
using namespace std;

int powerofTwo(int n){
  //base case 
  if(n==0)
    return 1;

    //recusive realtion 
    int sp = powerofTwo(n-1);
    int bp = 2 *sp;

    return bp;
}


int main(){

    int n ;
    cin>>n;

    int ans = powerofTwo(n);

    cout<<ans<<endl;

    return 0;
}