#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *pointer;
    pointer = &x;
    cout<<x<<endl<<pointer<<endl<<&x<<endl<<*pointer<<endl<<&pointer;
    return 69;

}
