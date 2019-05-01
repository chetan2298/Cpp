#include<iostream>
using namespace std;

class rect{

private:

int length;
int breadth;

public:
    rect(int l,int b)
    {
        length=l;
        breadth=b;
    }
    rect()
    {
        length=0;
        breadth=0;
    }
    void area()
    {
        cout<<length*breadth;
    }

      ~rect()
      {

          cout<<"Destructor at work";

      }
   // int perimeter();
}x;
/*
int rect::perimeter()
{
    int z;
    z=2*(length*breadth);
    cout<<z;
}*/
int main()
{

    rect x(5,2);
    cout<<"area"<<x.area()<<endl;
    //cout<<"perimeter"<<x.perimeter()<<endl;
    return 0;

}
