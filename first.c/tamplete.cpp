#include<iostream>
using namespace std;

template<class T>
void add (T a, T b)
{
    cout<<"the sum is :"<<a+b<<endl;
}
int main ()
{
    int a,b;
    a = 10;
    b = 20;
    add (a,b);
    return 0;
}
