#include<iostream>
using namespace std;
struct rectangle
{char name [20];
    int length;
    int breadth;
    int area;
}x;
int main()
{
   /* struct rectangle x;
    cin>>x.length>>x.breadth;

    struct rectangle x={"Chetan",2,2};
   x.area=2*(x.length*x.breadth);
    cout<<x.area;
    cout<<x.name;
    return 69;
*/
struct rectangle *p=&x;
cin>>(*p).length>>(*p).breadth;
// cout<<(*p).length<<(*p).breadth;
(*p).area=(2*(((*p).length)+((*p).breadth)));
return (*p).area;
//return 69;



}
