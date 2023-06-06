#include<iostream>
#include<stack>
using namespace std;

class Stack{
    //properties
    public :
    int *arr;
    int top;
    int size;

    //behaviour 
    Stack(int size ){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size-top >1){
            top++;
            arr[top]= element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
         if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0 && top <size){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    };

};

int main(){
    
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(44);
    st.push(44);
    st.push(44);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stcak is not empty"<<endl;
    }


    /*
    stack <int> s;
    s.push(2);
    s.push(3);
    // for(int i = 0 ; i<s.size();i++){
    //     cout<<s<<" ";
    // }
    s.pop();
    // s.pop();
    cout<<"Printing top element "<<s.top()<<endl;
    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    cout<<"size of the stack is "<<s.size()<<endl;
    return 0;
    */
}