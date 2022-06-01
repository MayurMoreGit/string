#include<stdio.h>
#include<string.h>
void allTrim(char *);
int main()
{
int x;
char a[22];
printf("Enter a string :");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
allTrim(a);
printf("(%s)",a);
return 0;
}
void allTrim(char *p)
{
char *m,*j;
j=p;
m=p;
while(*m==' ') m++;
while(*m)
{
while(*m && *m!=' ')
{
*j=*m;
j++;
m++;
}
if(*m=='\0') break;
*j=' ';
j++;
while(*m==' ') m++;
}
if(j>p)
{
if(*(j-1)==' ')j--;
}
*j='\0';

}
void RightTrim(char *p)
{
char *m;
m=p;
while(*m!='\0')
{
m++;
}
m--;
while(m>=p && *m==' ')
{
m--;
}
*(m+1)='\0';
}
