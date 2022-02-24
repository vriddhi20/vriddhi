#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10],n,i,j,temp;
printf("enter the no. of elements");
scanf("%d",&n);
printf("enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[i];
a[i]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted order");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}


