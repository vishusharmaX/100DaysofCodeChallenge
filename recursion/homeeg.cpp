#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    cout<<"Source is : "<<src<<" "<<"Destination is : "<<dest<<endl;
    //base case 
    if(src==dest){
        cout<<"Pauch Gaya hoon"<<endl;
        return;
    }

    //recursive relation
    src++;
    // dest--;
    reachHome(src,dest);
}

int main(){

    int src = 1;
    int dest = 10;

    cout<<endl;

    reachHome(src,dest);
    
    return 0;
}