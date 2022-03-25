#include<stdio.h>
#include<string.h>
int main()
{
int i=0,count=0;
char databits[80];
printf("enter the databits");
scanf("%s",databits);
for(i=0;i<strlen(databits);i++)
{
if(databits[i]=='1')
count++;
else
count=0;
printf("%c",databits[i]);
if(count==5)
{
printf("0");
count=0;
}
}
return (0);
}
