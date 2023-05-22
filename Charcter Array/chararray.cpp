#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s = 0; 
    int e = n-1 ;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}


int getlength(char name[]){
    int count = 0;
    for(int i =0 ; name[i] != '\0' ;i++){
        count++;
    }
    return count;
}


int main(){
    char name[20];
    cout<<"Enter your name is"<<endl;
    cin>>name;
    // name [2] = '\0';

    cout<<"Your name is ";
    cout<<name<<endl;
    int len = getlength(name);

    reverse(name,len);
    cout<<name;
    cout<<endl;
    return 0;
}
