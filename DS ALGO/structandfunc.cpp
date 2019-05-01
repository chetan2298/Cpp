#include<iostream>
using namespace std;
struct rect{
int length;
int breadth;

};
void initialiser (struct rect *x,int l,int b)
{
    x->length=21;
    x->breadth=10;
    cout<<x->length<<x->breadth;
}
int main()
{   struct rect p;
int a=200,b=100;
    initialiser(&p,a,b);

}
