#include<iostream>
using namespace std;
struct arr
{
    int length;
    int cize;
    int *a;
}x;
int display(struct arr y)
{
    for(int i=0;i<x.cize;i++)
        cout<<x.a[i];
return 69;
}

int main()
{cout<<"ENTER THE SIZE OF ARRAY BRO";
cin>>x.cize;
   x.a=new int[x.cize];
for(int i=0;i<x.cize;i++)
    cin>>x.a[i];
display(x);

}
