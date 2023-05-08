#include<iostream>
using namespace std;

int factorail (int n){
    int fact =1;
    for(int i =1; i<=n; i++){
        fact = fact * i ;
    }
    return fact ;
}

int nCr(int n , int r){

    int num = factorail(n);

    int dem = factorail(r)* factorail(n-r);

    return num/dem ;

}

int main(){
    
    int n, r;
    cin>>n>>r;

    cout<<"Answer is "<<nCr(n,r);
}