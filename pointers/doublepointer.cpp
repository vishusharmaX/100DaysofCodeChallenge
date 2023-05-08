#include<iostream>
using namespace std;

// void update(int **p){
//     // p = p + 1 ;
//     //kuch change hoga is?? - NO CHANGE

//     // *p = *p +1;
//     //kuch change hoga is?? -YES Change 

//     **p = **p + 1;
//     //kuch change hoga is?? -YES Change
// }

void update(int *p){
    *p = (*p) *2;
}

void increment(int **p){
    ++(**p);
}

int main(){
    /*
    int i = 5;
    int *ptr = &i;

    int **ptr2= &ptr;
    
    // cout<<&i<<" "<<ptr<<" "<<*ptr2;
    cout<<endl;
    // For printing the value of i 
    cout<<i<<" "<<*ptr<<" "<<**ptr2;
    cout<<endl;
    // For printing the address of i 
    cout<<&i<<" "<<ptr<<" "<<*ptr2;
    cout<<endl;
    cout<<&ptr<<endl;
    cout<<ptr2<<endl;
    
    cout<< endl <<endl;

    cout<<"before "<< i <<endl;
    cout<<"before "<< ptr <<endl;
    cout<<"before "<< ptr2 <<endl;
    update(ptr2);
    cout<<"After "<< i <<endl;
    cout<<"After "<< ptr <<endl;
    cout<<"After "<< ptr2 <<endl;
    */

    //Question 1 -Yes Sahi h 

    // int first = 8 ;
    // int second = 18 ;
    //  int *ptr= &second;
    //  *ptr = 9 ;
    //  cout<<first<< " " <<second<<endl;

    //Question 2 -Yes Sahi h 
   
    // int first = 6 ;
    // int *p= &first;
    // int *q = p ;
    // (*q)++;
    // cout<<first <<endl;


    //Question 3 -Yes Sahi h Mera

    // int first = 8 ;
    // int *p= &first;
    // // cout<<first<<endl;
    // cout<< (*p)++<<" "<<endl;
    // cout<<first<<endl;

    //Question 4 -Yes Sahi h Mera

    // int *p = 0 ;
    // int first  = 110;
    // p = &first ;
    // cout<<*p<<endl;


    //Question 5 -Yes Sahi h Mera

    // int first = 8 ;
    // int second  = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third +2;
    // cout<<first<<" "<<second<<endl;


    //Question 6 -Galat tha   Mera 

    // float f = 12.5 ;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p ;
    // cout<<*ptr << " "<< f << " "<< p << endl;


    //Question 7 -Yes Sahi h Mera

    // int arr[5];
    // int *ptr;
    // cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;

    //Question 8 -Yes Sahi h 
    
    // int arr[] = {11,21,13,14};
    // cout<<*(arr)<<" "<<*(arr+1)<<endl;

    //Question 9 -Yes Sahi h Mera
    // int arr[6] ={11,12,31};
    // cout<< arr <<" "<< &arr <<endl;

    //Question 10 -Yes Sahi h Mera
    // int arr[6] ={11,12,31};
    // cout<< (arr + 1) <<endl;

    //Question 11 -Yes Sahi h Mera
    // int arr[6]= {11,21,13};
    // int *p = arr;
    // cout<<p[2]<<endl;

    //Question 12 -Yes Sahi h Mera
    // int arr[6]= {11,21,13,14,15};
    // cout<<*(arr)<<" "<<*(arr+3)<<endl;


    //Question 13 -Yes Sahi h Mera
    // int arr[6]= {11,21,31,41};
    // int *ptr = arr++;
    // cout<<*ptr<<endl;
    //Error Dega Code 


    //Question 14 -Yes Sahi h Mera
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout<<*ptr<<endl;


    //Question 15 -Yes Sahi h Mera
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout<<p<<endl;


    //Question 16 -Yes Sahi h Mera
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout<<p<<endl;


    //Question 17 -Yes Sahi h Mera

        // char str[] = "babbar";
        // char *p = str;
        // cout<<str[0]<< " "<<p[0]<<endl; 


    //Question 18 -Yes Sahi h Mera
    
        // int i = 10;
        // update(&i);
        // cout<<i<<endl;

    //Question 19 -Yes Sahi h Mera

    // int first = 110 ;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout<<first<<" "<<second<<endl;

    //Question 20 -Yes Sahi h Mera

    //  int first = 100;
    //  int *p = &first;
    //  int **q = &p;
    //  int second = ++(**q);
    //  int *r = *q;
    //  ++(*r);
    //  cout<<first << " "<<second<<endl;

    //Question 21 -Yes Sahi h Mera

    int num = 110 ;
    int *ptr = &num ;
    increment(&ptr);
    cout<<num<<endl;


    return 0;
}