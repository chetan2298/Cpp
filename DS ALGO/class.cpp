#include<iostream>
using namespace std;
class rec
{
private:
    int len;
    int bread;
public:
   /* int changeval(int x,int y)
    {
        len=x;
        bread=y;
    }
    int showval()
    {
        cout<<len<<endl<<bread;
    }*/
    int changeval(int ,int );
    int showval();
};
int rec::changeval(int x,int y)
    {
        len=x;
        bread=y;
    }
    int rec::showval()
    {
        cout<<len<<endl<<bread;
    }
int main()
{rec x;
int a,b;
cin>>a>>b;
x.changeval(a,b);
x.showval();


}
