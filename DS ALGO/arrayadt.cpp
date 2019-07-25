#include<iostream>
using namespace std;
struct arra{

int length;
int cize;


}x;
void add(struct arra x,int arr[],int index,int element)
{
    for(int i=x.cize;i<index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    x.length++;
}

void del(struct arra x,int arr[],int elem)
{
    int index;
    for(int i=0;i<x.length;i++)
    {
        if (arr[i]==elem)
           {
            cout<<"found at "<<i<<" deleting"<<endl;
            index=i;
           }
        else
            continue;
    }

    for(int i=index;i<x.cize;i++)
    {
        arr[i]=arr[i+1];
    }
    x.length-=1;
    cout<<"new length is "<<x.length<<endl;
}

void display(struct arra x,int arr[])
{
    for(int i=0;i<x.cize;i++)
        cout<<" "<<arr[i]<<" "<<endl;
}

int main()
{int ind,ele;

    cout<<"Enter the size bro: ";
    cin>>x.cize;
    int arr[x.cize];
    cout<<"Enter the no of elements: ";
    cin>>x.length;
    cout<<"Enter the elementss now: "<<endl;
    for(int i=0;i<x.length;i++)
        cin>>arr[i];
    for(int i=x.cize;i>x.length-1;i--)
        arr[i]=0;






while(1){
    int choice;

    cout<<"enter operation u want to perform boi:"<<endl<<"1.Add/append an element"<<endl<<"2.Delete an element"<<endl<<"3.Exit"<<endl;
    cin>>choice;
    switch(choice)
    {


       case 1:
    {cout<<"Enter the element and the index"<<endl;
    cin>>ele>>ind;
    add(x,arr,ind,ele);
    cout<<"final array"<<endl;
    display(x,arr);
    break;}
    case 2:{
    cout<<"enter element to be deleted";
    cin>>ele;
    del(x,arr,ele);
cout<<"final array"<<endl;
display(x,arr);
    break;
    case 3:
        {
            exit(1);
        }
    }
    }
}
}
