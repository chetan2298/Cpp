#include<iostream>
using namespace std;

int add(int *x,int *y)
{
    int z;
    z=*x+*y;
    cout<<x<<endl<<y<<endl<<*x<<endl<<*y<<endl;
    cout<<z<<endl;


}
int main()
{

    int a,b;
    cin>>a>>b;
    cout<<endl;
    add(&a,&b);
 return 69;
}




