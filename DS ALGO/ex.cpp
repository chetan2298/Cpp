#include<iostream>
using namespace std;
int ser(int n,int m=1)
{
    if(m<=10)
    {ser(n,m+1);
        cout<<n<<"*"<<m<<"="<<n*m<<endl;
        //m+=1;


    }
    else{
        return 1;
    }
}
int main()
{cout<<"Enter number for table";
int x;
cin>>x;
    ser(x);
}
