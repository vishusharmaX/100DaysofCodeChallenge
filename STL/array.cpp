
#include <iostream>
#include <array>

using namespace std;

int main()
{
    cout<<"Hello World";
    
    array<int,4> a= {3,5,7,98};
    
    int size = a.size();
    
    for(int i = 0 ; i < size ; i++){
        cout<<a[i]<<endl;
    }
    
    cout<<size<<endl;
    cout<<"Element at index 2 is "<<a.at(2)<<endl;
    cout<<"Empty or NotEmpty "<<a.empty()<<endl;
    cout<<"First Element"<<a.front()<<endl;
    cout<<"Last Element"<<a.back()<<endl;
    return 0;
}
