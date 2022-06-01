#include<stdio.h>
#include<string.h>
int findAndReplace(char *p,char *q,char *r)
{
char *a,*b,*c,*t,*j,*s;
int k=0;
int blength,clength;
blength=0;
b=q;
while(*b)
{
blength++;
b++;
}
clength=0;
c=r;
while(*c)
{
clength++;
c++;
}

j=p;
while(1)
{
a=j;
b=q;
while(*a && *a!=*b) a++;
if(*a=='\0') break;
j=a;
while(*a && *b && *a==*b)
{
a++;
b++;
}
if(*b=='\0') 
{
k++;
//sceniro where blength And clength is equal
if(blength=clength)
{
a=j;
c=r;
while(*c)
{
*a=*c;
a++;
c++;
}
}
//sceniro where blength is greater than  clength( pull back required)
if(blength>clength)
{
a=j;
c=r;
while(*c)
{
*a=*c;
a++;
c++;
}
t=a;
s=a+(blength-clength);
while(*s)
{
*t=*s;
t++;
s++;
}
*t='\0';
}
//sceniro where clength is greater than  blength( puch back required)
if(blength<clength)
{
t=a;
while(*t) t++;
s=t;
t=t+(clength-blength);
while(s>=a)
{
*t=*s;
t--;
s--;
}
a=j;
c=r;
while(*c)
{
*a=*c;
a++;
c++;
}
}
j=a-1;
}
if(*a=='\0') break;
j++;
}
return k;
}
int main ()
{
char a[82],b[22],c[22];
int x;
printf("Enter a string : ");
fgets(a,82,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
printf("Find What : ");
fgets(b,22,stdin);
fflush(stdin);
b[strlen(b)-1]='\0';
printf("Replace With : ");
fgets(c,22,stdin);
fflush(stdin);
c[strlen(c)-1]='\0';
x=findAndReplace(a,b,c);
printf("%d times relacement done\n",x);
if(x>0)
{
printf("Now the new string is %s\n",a);
}
return 0;
}
