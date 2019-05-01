#include<iostream>
using namespace std;
struct rec
{
    int length;
    int breadth;

};
int area(struct rec *p,int l,int b)
{
 p->length=l;
 p->breadth=b;
 return l;
}
int main()
{

    struct rec x;
    area(&x,2,4);



}
