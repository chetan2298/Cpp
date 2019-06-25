#include<iostream>
using namespace std;
int fun(int n)
{ if(n>10)
    return n-10;
    else
    return fun(fun(n+11));
}
int main()
{
    int x=3;
    cout<<fun(x);

}
