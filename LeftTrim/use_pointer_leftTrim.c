#include<stdio.h>
#include<string.h>
void LeftTrim(char *p)
{
char *q;
q=p;
while(*q==' ')
{
q++;
}
if(p<q)
{
while(*q!='\0')
{
*p=*q;
q++;
p++;
}
*p='\0';
}
}
int main()
{
int x;
char a[22];
printf("Enter a string :");
fgets(a,52,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
LeftTrim(a);
printf("(%s)",a);
return 0;
}
