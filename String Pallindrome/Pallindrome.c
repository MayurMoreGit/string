#include<stdio.h>
int main ()
{
int e,f;
char a[21];
printf("Enter  a String ");
scanf("%s",a);
fflush(stdin);
f=0;
while(a[f]!='\0')
{
f++;
}
f--;
e=0;
if(e<f && a[e]==a[f])
{
e++;
f--;
printf("%s is  Pallindrome String",a);
}
else
{
printf("%s is NOT Pallindrome String ",a);
}
return 0;
}