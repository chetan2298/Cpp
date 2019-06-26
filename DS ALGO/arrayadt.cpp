#include<iostream>
using namespace std;
struct arra{

int length;
int cize;


}x;
void add(struct arra x,int arr[],int index,int element)
{
    for(int i=x.length;i<index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
}
void display(int arr[])
{
    for(int i=0;i<x.length;i++)
        cout<<arr[i];
}
void

int main()
{int ind,ele;

    cout<<"Enter the size bro";
    cin>>x.cize;
    int arr[x.cize];
    cout<<"ENter the no of elements:";
    cin>>x.length;
    for(int i=0;i<x.length;i++)
        cin>>arr[i];

    cout<<"Enter the element to be entered and address";
    cin>>ind>>ele;
    add(x,arr,ind,ele);

display(arr);
}
