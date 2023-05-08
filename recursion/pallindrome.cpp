#include<iostream>
using namespace std;

bool checkPalindrome(string s , int i , int j){
    if(i>j){
        return true;
    }
    //recursive case 
    if(s[i]!= s[j]){
        return false;
    }
    else{
        return checkPalindrome(s,i+1,j-1);
    }

}

int main(){

    string name= "babbar";

    bool ispalindrome = checkPalindrome(name,0,name.length()-1);
    
    if(ispalindrome == true){
        cout<<"Palindrome"<<endl;
    }
    else {
        cout<<"Not Palindrome"<<endl;
    }


    return 0;
}