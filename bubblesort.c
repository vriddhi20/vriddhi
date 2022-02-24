#include<stdio.h>
#include<stdlib.h>
int n;
void Bubble_Sort(int a[])
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
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
Bubble_Sort(a);
printf("sorted order");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}



