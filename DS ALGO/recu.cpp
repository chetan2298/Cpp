#include<iostream>
using namespace std;
int fun(int n)
{ static int x=0;
if(n>0)
{x++;

    return fun(n-1);

}

return 0;
}
int main()
{
    int x=5;
    cout<<fun(5);
}
