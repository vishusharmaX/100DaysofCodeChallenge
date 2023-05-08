#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Printing v"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Finding 6->"<<binary_search(v.begin(),v.end(),-6)<<endl;
    cout<<"Lower Bound->"<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound->"<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a = 3 ;
    int b = 5;
    cout<<"max->"<<max(a,b);
    cout<<"min->"<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<endl;
    cout<<b<<endl;

    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<abcd<<endl;

    rotate(v.begin(),v.begin()+3,v.end());
    cout<<"after rotate"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }   
    cout<<endl;
    cout<<"Sorting"<<endl;//it based on the Intro Shot it depend on the  quick sort heap , insertion short;
    sort (v.begin(),v.end());
    // cout<<"AfterSort"<<endl;
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}