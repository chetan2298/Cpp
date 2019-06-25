#include<iostream>
using namespace std;

int f (int &x, int c)

{

    c=c-1;

if(c==1)
return 1;
x = x + 1;

return f(x,c) * x;

        }

int main()
{int p=5;
    cout<<f(p,p);
}
