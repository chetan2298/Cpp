#include<iostream>
using namespace std;
int fun(int n)
{
    if (n>0)
    {
    cout<<n;
    fun(n-1);}
else
    return 69;
}
int main()
{
    int x=5;
    fun(x);
    return 0;
}
