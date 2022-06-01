#include<stdio.h>
int getStringLength(char *);
int main()
{
char a[21];
int x;
printf("Enter a String : ");
fgets(a,22,stdin);
a[getStringLength (a)-1]='\0';
x=getStringLength (a);
printf("Length of String %s is %d ",a,x);
return 0;
}
int getStringLength(char *p)
{
int k=0;
while(*p!=0)
{
k++;
p++;
}
return k;
} 
