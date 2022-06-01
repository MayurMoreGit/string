#include<stdio.h>
#include<string.h>
int CompareStringIgnoreCase(char *p,char *q);
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
x=CompareStringIgnoreCase(a,b);
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
int CompareStringIgnoreCase(char *p,char *q)
{
char e,f;
while(*p!='\0' && *q!='\0' && *p==*q)
{
e=*p;
f=*q;
if(e>=97 && e<=122)
{
e=e-32;
}
if(f>=97 && f<=122)
{
f=f-32;
}
if(e!=f)
{
break;
}
p++;
q++;
}
if(*p=='\0' || *q=='\0')
{
return *p-*q;
}
return e-f;
}
