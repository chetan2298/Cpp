#include<iostream>
#include<vector>
using namespace std;
int main()
{vector <int> v;

    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v[0]<<endl;
    cout<<v.capacity()<<endl;
v.push_back(20);
cout<<v[1]<<endl;
    cout<<v.capacity()<<endl;
v.push_back(30);
cout<<v[2]<<endl;
    cout<<v.capacity()<<endl;
v.push_back(40);
cout<<v[3]<<endl;
    cout<<v.capacity()<<endl;
v.push_back(50);
cout<<v[4]<<endl;
    cout<<v.capacity()<<endl;

}
