#include<iostream>
using namespace std;
int main()
{
    int *p;
    p=new int[6];
    for(int i=0;i<6;i++)
        cin>>p[i];

    for(int i=5;i>=0;i--)
     cout<<p[i];
     }
