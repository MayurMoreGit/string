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
if(a[x]>=65 && a[x]<=90)
{
a[x]=a[x]+32;
}
x++;
}
printf("Lower Case is %s",a,x);
}