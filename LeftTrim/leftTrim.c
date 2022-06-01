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
printf("String Before Applying Left Trim(%s)\n",a);
f=0;
while(a[f]==' ')
{
f++;
}
if(f>0)
{
e=0;
while(a[f]!='\0')
{
a[e]=a[f];
e++;
f++;
}
a[e]='\0';
}
printf("String After Applying Left Trim (%s)",a);
return 0;
}