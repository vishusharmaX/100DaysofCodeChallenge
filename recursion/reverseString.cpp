#include<iostream>
using namespace std;

void reverseString(string &s , int i , int j){
    //base case
    if(i>=j){
        return;
    }
    //recusive realtion
    swap(s[i],s[j]);
    i++;
    j--;
     reverseString(s,i,j);

}


int main(){
    
    string name ="vishu";

    reverseString(name,0,name.length()-1);

    cout<<name<<endl;
    return 0;
}