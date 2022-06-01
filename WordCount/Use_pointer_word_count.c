#include<stdio.h>
#include<string.h>
int CountWord(char *p);
int main()
{
int x;
char a[82];
printf("Enter a string :");
fgets(a,82,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
printf("Number of Words in %s : %d\n",a, CountWord(a));
return 0;
}
int CountWord(char *p)
{
char *m;
int count;
count=0;
m=p;
while(*m==' ')
{
m++;
}
while(*m)
{
if(*m==' ')
{
count++;
while(*m==' ') m++;
}
else
{
m++;
}
}
if(m>p)
{
if(*(m-1)==' ') count--;
}
count++;
return count;
}