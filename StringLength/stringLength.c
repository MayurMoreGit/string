#include<stdio.h>
int main()
{
char a[21];
int x;
printf("Enter a String : ");
scanf("%s",a);
x=0;
while(a[x]!='\0')
{
x++;
}
printf("Length of %s is %d",a,x);
return 0;
}