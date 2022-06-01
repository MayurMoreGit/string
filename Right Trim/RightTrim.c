#include<stdio.h>
#include<string.h>
int main()
{
int e,f;
char a[22];
printf("Enter a String ");
fgets(a,22,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
printf("String Before Applying Right Trim(%s)\n",a);
e=0;
while(a[e]!='\0')
{
e++;
}
e--;
while(e>=0 && a[e]==' ')
{
e--;
}
a[e+1]='\0';
printf("String After Applying Right Trim (%s)",a);
return 0;
}