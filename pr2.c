#include<stdio.h>
int main()
{
int n,i,key,a[10];
printf("enter the limit");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf(enter thye key value");
scanf("%d",&key);
for(i=1;i<n;i++)
{
if(key==a[i])
{
printf("item found at location %d,i");
return 0;
}
}
print("element not found");
}
