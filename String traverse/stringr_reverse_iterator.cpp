#include<stdio.h>
#include<iostream>
using namespace std;
int main ()
{
string g="ujjain";
string::reverse_iterator ri=g.rbegin();
while(ri!=g.rend())
{
cout<<*ri<<endl;
++ri;
}
return 0;
}
