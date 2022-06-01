#include<stdio.h>
#include<string.h>
void CopyString(char *p,char *q)
{
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
char a[22], b[22];
printf("Enter a string :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
CopyString(b,a);
printf("%s",b);
return 0;
}
