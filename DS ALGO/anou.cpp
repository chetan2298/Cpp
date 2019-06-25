#include<iostream>
using namespace std;
int series(int n)
{
    if(n>0)
    {
        return 2+series(n-1);

    }
else
    return 0;
}
int main()

{int x=3;
cout<<series(x);

    }
