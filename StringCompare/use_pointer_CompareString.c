#include<stdio.h>
#include<string.h>
int CompareString(char *p,char *q)
{
while(*p!='\0' && *q!='\0' && *p==*q)
{
p++;
q++;
}
return (*p)-(*q);
}
int main()
{
int x;
char a[52], b[21];
printf("Enter a string :");
fgets(a,52,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
printf("Enter a  another string :");
fgets(b,22,stdin);
fflush(stdin);
b[strlen(b)-1]='\0';
x=CompareString(a,b);
if(x==0)
{
printf("%s is same as %s",a,b);
}
if(x<0)
{
printf("%s is less than %s",a,b);
}
if(x>0)
{
printf("%s is greater than as %s",a,b);
}
return 0;
}
