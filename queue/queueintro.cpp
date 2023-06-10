#include<iostream>
#include<queue>
using namespace std;

int main(){
    
    //create a queue
    queue<int> q;

    q.push(15);
    cout<< "front of the queue is : "<<q.front()<<endl;
    q.push(16);
    cout<< "front of the queue is : "<<q.front()<<endl;
    q.push(14);
    cout<< "front of the queue is : "<<q.front()<<endl;
    q.push(22);
    cout<< "front of the queue is : "<<q.front()<<endl;
    // cout<<endl;

    cout<<"size of the queue is : "<<q.size()<<endl;
    cout<<q.front()<<endl;

    q.pop();
    q.pop();
    q.pop();
    cout<<"size of the queue is : "<<q.size()<<endl;

    cout<<q.front()<<endl;

    cout<<q.back()<<endl;

    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }

    return 0;
}
