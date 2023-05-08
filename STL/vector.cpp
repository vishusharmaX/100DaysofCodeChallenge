#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
   
    vector<int> v;
    vector <int> a(5,1);
    vector <int> last(a);
    cout<<"print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    } cout<<endl;
    

    cout<<"capacity ->"<<v.capacity()<<endl;
    v.push_back(10);
    // v.push_back(122);
    
    v.push_back(1);
    
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(2);
    
    cout<<"capacity->"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"Size ->"<<v.size()<<endl;

    cout<<"Element at 2nd Index"<<v.at(2)<<endl;
    cout<<"Front Element"<<v.front()<<endl;
    cout<<"Back Element"<<v.back()<<endl;
    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    } cout<<endl;

    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    } cout<<endl;

    v.clear() ;
    cout<<"size" <<v.size()<<endl;
    cout<<"capacity->"<<v.capacity()<<endl;

}