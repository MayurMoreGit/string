#include<stdio.h>
#include<string.h>
int isPallindromeString(char *p)
{
char *m;
char e,f;
m=p;
while(*m!='\0')
{
m++;
}
m--;
while(p<m)
{
e=*p;
f=*m;
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
return 0;
}
p++;
m--;
}
return 1;
}
int main()
{
int x;
char a[22];
printf("Enter a string :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
x=isPallindromeString(a);
if(x==1)
{
printf("%s is a Pallindrome String",a);
}
else
{
printf("%s is a Pallindrome String",a);
}
return 0;
}
