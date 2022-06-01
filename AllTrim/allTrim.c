#include<stdio.h>
#include<string.h>
int main()
{
int e,f;
char a[22];
printf("Enter a string :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
printf("(%s)\n",a);
e=0;
f=0;
while(a[f]==' ')
{
f++;
}
while(a[f]!='\0')
{
while(a[f]!=' ' && a[f]!='\0')
{
a[e]=a[f];
e++;
f++;
}
a[e]=' ';
e++;
while(a[f]==' ')
{
f++;
}
}
if(e>0)
{
e--;
if(a[e]==' ')
{
a[e]='\0';
}
}
else
{
a[0]='\0';
}
printf("(%s)\n",a);
return 0;
}
