#include<iostream>
using namespace std;
double tay(int x,int n)
{
    static double p=1,f=1;
    double r;
    if(n==0)
        return 1;
    else
        r=tay(x,n-1);
        p*=x;
        f*=n;
        return r+(p/f);

}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<tay(a,b);


}
