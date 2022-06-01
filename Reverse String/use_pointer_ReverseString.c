#include<stdio.h>
#include<string.h>
void ReverseString(char *p)
{
char *m;
char g;
m=p;
while(*m!='\0')
{
m++;
}
m--;
while(p<m)
{
g=*p;
*p=*m;
*m=g;
p++;
m--;
}
}
int main()
{
int x;
char a[22];
printf("Enter a string :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
ReverseString(a);
printf("%s",a);
return 0;
}
