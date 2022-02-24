#include<stdio.h>
#include<stdlib.h>
int n;
void Selection_Sort(int a[])
{
int i,loc,j,temp;
for(i=0;i<n-1;i++)
{
loc=i;
for(j=i+1;j<n;j++)
{
if(a[loc]< a[j])
{
loc=j;
}
}
if(loc!=i)
{
temp=a[i];
a[i]=a[loc];
a[loc]=temp;
}
}
}


int main()
{
int a[10],i;
printf("enter the no. of elements");
scanf("%d",&n); 
printf("enter the array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
Selection_Sort(a);
printf("sorted order");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}


