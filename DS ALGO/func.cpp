#include<iostream>
using namespace std;
int swap( int a,int b)
{
    int c;
    c=a;
    b=a;
    a=b;
    return (a,b);
}
int main()
{

    int x,y,f;
    x=10;
    y=12;
    f=swap(x,y);
    cout<<f;
}
