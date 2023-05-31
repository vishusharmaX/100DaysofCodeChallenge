#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp; 
    }
}

bool checkPallindrome(char a[], int n){
    int s = 0; 
    int e= n-1;

    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else if(a[s] =='@' || a[s]=='#' || a[s]=='?'|| a[s]=='&'){
            s++;
        }
        else if( a[e]=='@' || a[e]=='#'|| a[e]=='?'|| a[e]=='&'  ){
            e--;
        }
        else{
            s++;
            e--;
        }

    }
    return 1; 
}

void reverse(char name[], int n ){
    int s =0 ; 
    int e = n-1; 
    while(s<=e){
        swap(name[s++],name[e--]);
    }
}

int getlength (char name[]){
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
    cout<<getlength(name)<<endl;

    int ln = getlength(name);
    cout<<name<<endl;
    reverse(name,ln);

    cout<<"Pallindrome or not :"<<checkPallindrome(name,ln)<<endl;

    cout<<"Character is "<<toLowerCase('b')<<endl;
    cout<<"Character is "<<toLowerCase('C')<<endl;
    cout<<endl
    

    return 0;
}










