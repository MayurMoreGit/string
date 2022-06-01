#include<stdio.h>
int main()
{
char a[21],b[21];
int e,f;
printf("Enter  a String ");
scanf("%s",a);
fflush(stdin);
printf("Enter  a  another String ");
scanf("%s",b);
fflush(stdin);
e=0;
while(a[e]!='\0')
{
e++;
}
f=0;
while(b[f]!='\0')
{
a[e]=b[f];
e++;
f++;
}
a[e]='\0';
printf("String concatenation %s",a);
return 0;
}