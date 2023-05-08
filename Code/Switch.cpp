#include<iostream>
using namespace std;

int main(){
    char ch = '1';
    int num =1;

    switch(ch){
        case 1 : cout<<"First"<<endl;
                    break;

        // Nested Switch 
        case '1': switch (num)
        {
        case 1 : cout<< "Value of the num is "<<num<<endl;
            break;
        
        }
        break;
        // It is not mandotry to write the default case
        default : cout<<"It is  default Case"<<endl;
    } 







}
