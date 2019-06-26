#include<iostream>
using namespace std;
int main()
 {

 int sizee,length;
 cout<<"Enter size of array\n";
 cin>>sizee;
 int A[sizee];
 cout<<"Enter element in array"<<endl;
 for(int j=0;j<sizee;j++)
    cin>>A[j];

int del, index=0;
cout<<"Enter element to be deleted\n";
cin>>del;
for(int i=0;i<sizee;i++)
{//cout<<endl<<i<<endl;
    if(A[i]==del)
        { index=i;
         cout<<"found at.."<<i<<"..deleting";
        }
else
    continue;
//cout<<endl<<"Element to be deleted is at index:"<<index<<endl;
for(int i=index;i<sizee;i++)
{
    A[i]=A[i+1];
}
sizee-=1;
cout<<endl<<"new array size is "<<sizee<<endl;
for(int i=0;i<sizee;i++)
    cout<<" "<<A[i];

cout<<endl<<A[sizee];
    }









 }
