#include<iostream>
using namespace std;
struct hooman
{
    char name[10];
    char add[10];
    int age;
    int doy;
};

int main()
{
    struct hooman x;
    x.name={"chaitanya"};
    cout<<x.name<<"\n"<<x.add<<"\n"<<x.age<<"\n"<<x.doy;
    return 69;
}
