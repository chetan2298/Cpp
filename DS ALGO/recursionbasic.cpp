#include<iostream>
using namespace std;
int series(int n)
{
    if(n>0)
    {cout<<n<<endl;
        cout<< series(n-1);
    }

}
int main()
{
    cout<<"enter number for decreasing series"<<endl;
    cout<<series(3);
}

