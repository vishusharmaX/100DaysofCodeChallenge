#include<iostream>
using namespace std;

int main(){


    /////////////*****************Pattern**********//////////////////


//  int n;
//  cin>>n;

//  int i=1;
//  while(i<=n){

//        int j=1; 
//        while(j<=n){
//          cout<<" * ";
//          j=j+1;
//        }
//        cout<<endl;

//        i =i+1;

//  }


/*
// 111
// 222
// 333
*/


// int n;
// cin>>n;

// int i=1;
// while(i<=n){
//    int j=1;
//    while(j<=n){
//       cout<< i ;
//       j=j+1;
//    }
//    cout<<endl;
//    i = i+1;

// }


// //// pattern will be like this 1234 1234 .....///////////

// int n;
// cin>>n;

// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<j;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }


// // //// pattern will be like this 4321 4321 .....///////////

// int n;
// cin>>n;

// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<n-j+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
// }



/* 
// 1 2 3 4 5 
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
*/


// int n;
// cin>>n;

// int i=1;
// int count =1;
// while (i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<count<<" ";
//          count =count+1;
//          j =j+1;

//     }
//     cout<<endl;
//     i = i+1;
// }



////////////Printing a star////////////////
// 4
// *
// **
// ***
// ****


// int n;
// cin>>n;

// int row=1;
// int count=1;

// while(row<=n){
//     int col=1;
//     while(col<=row){
//         cout<<"*";
//         col= col +1;

//     }
//     cout<<endl;
//     row= row+1;
// }


// //////////////Printing like this//////////////////////////
// 4
// 1
// 22
// 333
// 4444

// int n;
// cin>>n;

// int row=1;
// while(row<=n){
//     int col=1;
//     while (col<=row)
//     {
//         cout<<row;
//         col=col+1;
//     }
//     cout<<endl;
//     row =row+1;

// }

// //////////////////Printing like this///////////////
// 4
// 1 
// 2 3
// 4 5 6
// 7 8 9 10

// int n;
// cin>>n;

// int row=1;
// int count =1;

// while(row<=n){
//     int col=1;
//     while(col<=row){
//         cout<<count<<" ";
//         count= count+1;
//         col =col+1;
//     }
//     cout<<endl;
//     row= row+1;

// }


// //////////////////Printing like this///////////////
// 5
// 1
// 23
// 345
// 4567
// 56789

// int n;
// cin>>n

// int row=1;
// while(row<=n){
//     int col=1;
//     int value =row;
//     while(col<=row){
//         cout<<value;
//         value =value+1;
//         col =col+1;

//     }
//     cout<<endl;
//     row= row+1;
// }


 ////////////////////Printing like this///////////////
// 4
// 1 
// 2 1
// 3 2 1
// 4 3 2 1

//  int n;
//  cin>>n;

//  int i =1;

//  while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<(i-j+1)<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//  }



 ////////////////////Printing like this///////////////
//  5
// A A A A A 
// B B B B B
// C C C C C
// D D D D D 
// E E E E E

// int n;
// cin>>n;

// int row =1;
// while(row<=n){
//     int col =1;
//     while(col<=n){
//         char ch ='A'+row-1;
//         cout<< ch <<" ";
//         col = col+1;
//     }
//     cout<<endl;
//     row =row+1;
// }



// ///////////Printing Like This ////////////////
// 3
// A B C 
// A B C
// A B C

// int n;
// cin>>n;

// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=n){
//         char ch ='A'+ j-1;
//         cout<<ch<<" ";
//         j =j+1;
//     }
//     cout<<endl;
//      i= i+1;
// }



// ///////////Printing Like This ////////////////
// 3
// ABC
// DEF
// GHI


// int n;
// cin>>n;
// char value ='A';
// int i=1;
// while(i<=n){
//     int j=1;   
//     while(j<=n){
//        cout<<value;
//        value = value +1;
//        j=j+1; 
//     }
//     cout<<endl;
//      i= i+1; 
// }

// ///////////Printing Like This ////////////////
// 3
// A B C 
// B C D
// C D E

// int n;
// cin>>n;
// int i= 1;
// while(i<=n){
//    int j=1;
//    while(j<=n){
//     char ch = 'A'+i+j-2;
//     cout<< ch<<" ";
//     j=j+1;

//    } 
//    cout<<endl;
//    i =i+1;
//   }


// ///////////Printing Like This ////////////////
// 4
// A 
// B B
// C C C
// D D D D

// int n;
// cin>>n;
// int i= 1;
// while(i<=n){
//    int j=1;
//    while(j<=i){
//     char ch = 'A'+i-1;
//     cout<<ch<<" ";
//     j=j+1;

//    } 
//    cout<<endl;
//    i =i+1;
// }


// ///////////Printing Like This ////////////////

// 4
// A 
// B C
// D E F
// G H I J

// int n;
// cin>>n;
// int i=1;
// char value='A';
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         cout<<value<<" ";
//         value= value+1;
//         j=j+1;
//     }
//     cout<<endl;
//     i =i+1;
// }

// ///////////Printing Like This ////////////////
// 4
// A 
// B C
// C D E
// D E F G


// int n;
// cin>>n;

// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<=i){
//         char ch ='A'+i+j-2;
//         cout<<ch<<" ";
//         j=j+1;
//     }
//     cout<<endl;
//     i = i + 1; 
// }




// ///////////Printing Like This ////////////////
// 4
// D
// CD
// BCD
// ABCD

// int n;
// cin>>n;

// int i=1;
// while(i<=n){
//     int j=1;
//         char start = 'A' +n-i;
//     while(j<=i){
//         cout<<start<<" ";
//         start =start +1;
//         j=j+1;
//     }
//     cout<<endl;
//     i = i + 1; 
// }

// ///////////Printing Like This ////////////////
//  4
//    *
//   **
//  ***
// ****

// int n;
// cin>>n;

// int row =1;

// while(row<=n){
//     // ///space print karlo
//     int space =n-row;
//     while(space){
//         cout<<" ";
//         space =space-1;
//     }
//     // ////Star print karlo
//     int col =1;
//     while(col<=row){
//         cout<<"*";
//         col =col +1;
//     }
//     cout<<endl;
//      row= row+1;
// }

// ///////////Printing Like This ////////////////

// 4
// * * * * 
// * * * 
// * * 
// * 

// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int j=1;
//     while(j<= n-i+1){
//         cout<<"*"<<" ";
//         j=j+1;
//     }
//     i =i+1;
//     cout<<endl;
// }


// ///////////Printing Like This ////////////////
// 4
// ****
//  ***
//   **
//    *

// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     // ///Space ke liye 
//     int space =1;
//     while(space<i){
//         cout<<" ";
//         space =space+1;
//     }
//     int j=1;
//     while (j<= n-i+1)
//     {
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
    
// }

///////////Printing Like This ////////////////
// 4
// 1111
//  222
//   33
//    4

// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     // ///Space ke liye 
//     int space =1;
//     while(space<i){
//         cout<<" ";
//         space =space+1;
//     }
//     int j=1;
//     while (j<= n-i+1)
//     {
//         cout<<i;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
    
// }


///////////Printing Like This ////////////////
// 4
//    1
//   22
//  333
// 4444

// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int space=n-i;int j=1;
//     while(space){
//         cout<<" ";
//         space =space-1;
//     }
//     while(j<=i){
//         cout<<i;
//         j=j+1;
//     }
//     cout<<endl;
//     i = i + 1;
// }


///////////Printing Like This ////////////////
// 4
//    1 
//   2 3
//  4 5 6
// 7 8 9 10

// int n;
// cin>>n;
// int i=1;
// int count =1;
// while(i<=n){
//     int space =n-i;
//     while(space){
//         cout<<" ";
//         space= space-1;
//     }
//     int j=1;
//     while(j<=i){
//         cout<<count <<" ";
//         count =count+1;
//         j=j+1;

//     }
//     cout<<endl;
//     i=i+1;

// }

// ///////////Printing Like This ////////////////

// 4
//    1
//   121
//  12321
// 1234321

// int n;
// cin>>n;
// int i=1;

// while(i<=n){
//     // print space
//     int space =n-i;
//     while (space)
//     {
//         cout<<" ";
//         space =space -1;
//     }
    
//     // Print first triangle
//     int j=1;
//     while(j<=i){
//         cout<<j;
//         j=j+1;
//     }
//     // Print Second triangle
//     int start =i-1;
//     while(start){
//         cout<<start;
//         start =start -1;
//     }


//     cout<<endl;
//     i = i+1;


// }



// // ///////////Printing Like This ////////////////
// 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// int n;
// cin>>n;

// int i =1;
// while(i<=n){
//     // for first box
//     int j=1;
//     while(j<=n-i+1){
//         cout<<j;
//         j=j+1;
//     }
//     // for Second box
//      j =1;
//     while(j<= (i-1)*2){
//         cout<<"*";
//         j=j+1;
//     }
//     // for third box
//     j= n-i+1;
//     while(j>=1){
//         cout<< j;
//         j =j-1;
//     }
// cout<<endl;
// i= i+1;
// }



    
}


















