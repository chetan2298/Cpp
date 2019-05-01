#include<iostream>
using namespace std;

    struct square
    {
        int side;
        int result;
    };

    int main()
    {
        struct square x;
        struct square *p;
        struct square p=&x;
        p->side=20;
        p->result=(p->side*p->side);
        cout<<p->result;
        cout<<p->side;

        //struct square x;
        //x.side=4;
        //x.result=(x.side*x.side);
        //cout<<x.result;
    }




