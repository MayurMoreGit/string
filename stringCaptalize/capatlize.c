#include<stdio.h>
int main()
{
int x;
char a[21];
printf("Enter a String ");
scanf("%s",a);
x=0;
if(a[x]>=97 && a[x]<=122)
{
a[x]=a[x]-32;
}
x=1;
while(a[x]!='\0')
{
x++;
}
printf("captalize %s",a,x);
}
