#include<stdio.h>
int main()
{
int x;
char a[21];
printf("Enter a string  ");
scanf("%s",a);
x=0;
while(a[x]!='\0')
{
if(a[x]>=97 && a[x]<=122)
{
a[x]=a[x]-32;
}
x++;
}
printf("Upper Case is %s",a,x);
return 0;
}