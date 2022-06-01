#include<stdio.h>
#include<string.h>
int LastIndexOf(char *p,char*q)
{
char *a,*b,*j;
int k=-1;
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
if(*b=='\0') return k=j-p;
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
x=LastIndexOf(a,b); 
if(x==-1) printf("%s is not found in %s\n",b,a);
else printf("%s is  found in %s at index %d\n",b,a,x);
return 0;
}
