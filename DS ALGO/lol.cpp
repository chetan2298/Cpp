#include<iostream>
using namespace std;
int main()
{

    int arr[2][2];
    for(int i=0;i<=2;i++)
        cout<<arr+i<<" ";
    cout<<arr<<endl;
    cout<<arr+2<<endl<<*arr+3;
}
