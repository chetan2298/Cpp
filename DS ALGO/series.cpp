#include<iostream>
using namespace std;
int main()
{string a;

        cin>>a;

    for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]=='a'|| a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u' )
            {
                a[i]='#';
            }
        }
 for(int i=0;a[i]!='\0';i++)
        cout<<a[i];


}
