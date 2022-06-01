#include<stdio.h>
int main ()
{
int x;
char a[21], b[21];
printf("Enter  a String ");
scanf("%s",a);
fflush(stdin);
printf("Enter  another String ");
scanf("%s",b);
fflush(stdin);
x=0;
while(a[x]!='\0' && b[x]!='\0' && a[x]==b[x])
{
x++;
}
if(a[x]=='\0' && b[x]=='\0')
{
printf("%s is same as %s",a,b);
}
else
{
printf("%s is not same as %s",a,b);
}
return 0;
}