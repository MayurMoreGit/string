#include<stdio.h>
#include<string.h>
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
int main()
{
int x;
char a[22];
printf("Enter a string :");
fgets(a,52,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
RightTrim(a);
printf("(%s)",a);
return 0;
}
