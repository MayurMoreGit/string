#include<stdio.h>
#include<string.h>
void ConvertToLowerCase(char *p)
{
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
ConvertToLowerCase(a);
printf("%s",a);
return 0;
}
