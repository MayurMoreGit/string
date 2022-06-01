#include<stdio.h>
#include<string.h>
int isPallindromeString(char *p)
{
char *m;
m=p;
while(*m!='\0')
{
m++;
}
m--;
while(p<m)
{
if(*p!=*m)
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
