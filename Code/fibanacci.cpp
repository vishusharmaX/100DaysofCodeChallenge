#include<iostream>
using namespace std;

int fibonacci(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 2; i < n; i++)
    {
        int next = a + b;
        a = b;
        b = next;
    } 
      return b;
}

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "The " <<n<<"th term of the series is =  0" << endl;
        exit(0);
    }
    cout << "The " <<n<<"th term of the series is = "<< fibonacci(n) << endl;


    return 0;
}