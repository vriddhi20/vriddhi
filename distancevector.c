#include<stdio.h>
#include<stdlib.h>
int a[10],[10],n; 
int min(int a,int b)
{
return a<b?a:b;
}
void floyd()
{
int i,j,k;
for(k=0;k<=n;k++)
{
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
{
a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
}
}
}
}
int min()
{
int i,j;
{
printf("enter the no. of nodes");
scanf("%d",&n);
printf("enter the matrix elements \n");
for(i=0;i<=n;i++)
for(j=0;j<=n;j++)
{
scanf("%d",&a[i][j])
if(a[i][j]==0)
a[i][j]=999;
if(a[i]==a[j])
a[i]a[j]=0;
}
floyd();
{
printf("the distance of matrix is");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%2d",a[i][j]);
}
printf("/n");
}
}
return 0;
}
}
}
