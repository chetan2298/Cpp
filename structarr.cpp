#include<iostream>
using namespace std;
struct students{
char name[10];
char add[10];
int age;
int dob;

};
int main()
{
    struct students x[4];
    for(int i=0;i<4;i++)
    {
        cin>>x[i].name>>x[i].add>>x[i].age>>x[i].dob;
    }
    for(int i=0;i<4;i++)
    {cout<<x[i].name<<"\n"<<x[i].add<<"\n"<<x[i].age<<"\n"<<x[i].dob<<"\n";
}
}
