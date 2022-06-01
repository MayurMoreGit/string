#include<stdio.h>
int main()
{
char a[21],b[21];
int x;
printf("Enter  a String ");
scanf("%s",a);
x=0;
while(a[x]!='\0')
{
b[x]=a[x];
x++;
}
b[x]='\0';
printf("%s String Copy",b);
return 0;
}