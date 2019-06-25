#include<iostream>
using namespace std;
void fun(int n)
{
if(n>1)
{fun(n-2);
cout<<n<<endl;
return ;
fun(n-1);
}
}
int main()
{

fun(5);
return 0;

}
