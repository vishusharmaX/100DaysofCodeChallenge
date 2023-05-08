#include<iostream>
#include <deque>
using namespace std;



int main(){

    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    
    for(int i :d){
        cout<<i<<" ";
    }
    cout<<endl;

    // d.pop_front();
    
    cout<<endl;

    cout<<"Print first Index Element"<<d.at(1)<<endl;
    cout<<"front"<<d.front()<<endl;
    cout<<"back"<<d.back()<<endl;
    
    cout<<"Empty or Not "<<d.empty()<<endl;
    cout<<"Size "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"Size "<<d.size()<<endl;
    return 0;
}