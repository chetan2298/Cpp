#include<iostream>
using namespace std;
class si
{private:
    int p,r,t;
public:
    int cali(int a,int b,int c)
    {   p=a;
    r=b;
    t=c;
        int interest;
        interest=((p*r*t)/100);
        return interest;
    }
}x;
int main()
{int pr,ra,ti;
cin>>pr>>ra>>ti;

    cout<<x.cali(pr,ra,ti);
    return 69;

}
