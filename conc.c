#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
printf("enter the first string\n");
scanf("%s",a);
printf("enter the second string\n");
scanf("%s",b);
strcat(a,b);
printf("concatinate of 2 strings %s",a);
return 0;
}
