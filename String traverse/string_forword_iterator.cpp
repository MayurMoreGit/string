#include<stdio.h>
#include<iostream>
using namespace std;
int main ()
{
string g="ujjain";
string:: iterator i=g.begin();
while(i!=g.end())
{
cout<<*i<<endl;
++i;
}
return 0;
}
