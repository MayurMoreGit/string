#include<stdio.h>
#include<iostream>
using namespace std;
int main ()
{
string g="ujjain";
string b="abcdef";
g.replace(2,1,b,3,2);
cout<<g<<endl;
g.replace(2,2,"abcdefg",3);
cout<<g<<endl;
g.replace(2,2,"abcdefg",3,2);
cout<<g<<endl;  
g.replace(2,2,5,'A');
cout<<g<<endl;
return 0;
}
