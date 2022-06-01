#include<stdio.h>
#include<string.h>
void ConcatString(char *p,char *q)
{
while(*p!='\0')
{
p++;
}
while(*q!='\0')
{
*p=*q;
p++;
q++;
}
*p='\0';
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
ConcatString(a,b);
printf("%s",a);
return 0;
}
