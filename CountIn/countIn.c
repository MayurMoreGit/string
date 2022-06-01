#include<stdio.h>
#include<string.h>
int CountIn(char *p,char*q)
{
char *a,*b,*j;
int k=0;
j=p;
while(1)
{
a=j;
b=q;
while(*a && *b && *a!=*b) a++;
if(*a=='\0') return -1;
j=a;
while(*a && *b && *a==*b)
{
a++;
b++;
}
if(*b=='\0') k++;
if(*a=='\0') break;
j++;
}
return k;
}

int main()
{
int x;
char a[82],b[22];
printf("Enter a string :");
fgets(a,82,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
printf("Enter a Another String : ");
fgets(b,22,stdin);
fflush(stdin);
b[strlen(b)-1]='\0';
x=CountIn(a,b);
printf("%s  in %s found %d times(s)",b,a,x);
return 0;
}
