#include<stdio.h>
#include<string.h>
void ConvertToCapitalString(char *p)
{
if(*p>=97 && *p<=122)
{
*p=*p-32;
}
p++;
while(*p!='\0')
{
if(*p>=65 && *p<=90)
{
*p=*p+32;
}
p++;
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
ConvertToCapitalString(a);
printf("%s",a);
return 0;
}
