#include<iostream>
using namespace std;
int fact(int n)
{
    if (n==0)
        return 1;
    else
        return fact(n-1)*n;
}
int ncr(int x,int y)
{if(x<y){
cout<<"bhai ullu mat bana"<<endl;
    return -1;
    }
    int a,b,c,d;
    a=fact(x);
    b=fact(y);
    c=fact(x-y);
    d=a/(b*c);
    return d;

}
int main()
{int n,r;
cin>>n>>r;
    cout<<ncr(n,r);
return 69;
}
