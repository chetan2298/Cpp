#include<iostream>
using namespace std;
/*int fun(int n)
{
    if (n>0)
    {fun(n-1);
    cout<<n;}
else
    return 69;
}
int main()
{
    int x=5;
    fun(x);
    return 0;
}*/

//using loop
int fun(int n)
{int i=0;
    while(i<n)
    {
        i++;
        cout<<i;

    }
}
int main()
{

    int x=5;
    fun(x);
}
