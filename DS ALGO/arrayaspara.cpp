#include<iostream>
using namespace std;
int displayarr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}
int scanarr(int a[],int n)
{cout<<"youre in the func man";
    for(int i=0;i<n;i++)
       {cout<<"Enter the "<<i<<"th element";
         cin>>a[i];

       }

}
int main()
{
   int x;
   cout<<"dekh abhi toh main me hai sachme";
   cin>>x;
   int b[x];
   //for(int i=0;i<x;i++)
    //cin>>b[i];
    //displayarr(b,x);
    scanarr(b,x);
    cout<<"My nigga you re back in main";
    for(int i=0;i<x;i++)
        {cout<<"your "<<i<<"th element to be displayed is";
            cout<<b[i];
        }
}
