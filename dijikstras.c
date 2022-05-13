#include<stdio.h>
#include<stdlib.h>
int cost[10][10],n,d[10],p[10],i;
void diji(int source)
{
int u,min,i,j,v;
int s[10];
for(i=0;i<n;i++)
{
 s[i]=0;
 p[i]=source;
 d[i]=cost[source][i];
}
s[source]=1;
for(i=1;i<n;i++)
{
min=99;
u=-1;
for(j=0;j<n;j++)
{
if(s[j]==0)
if(d[j]<min)
{
min=d[j];
u=j;
}
}
if(u==-1)
return;
s[u]=1;
for(v=0;v<n;v++)
{
if(s[v]==0)
if(d[u]+cost[u][v]<d[u])
{
d[v]=d[u]+cost[u][v];
p[v]=u;
}
}
}
}
void short_path(int source,int destination)
{
int i,j;
i=destination;
while(i!=source)
{
printf("%d<--",i);
i=p[i];
}
printf("%d=%d",i,d[destination]);
}




void main()
{
int source,i,j,n;
printf("enter the no. of vertices");
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&cost[i][j]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
printf("%d\t",cost[i][j]);
scanf("%d",&cost[i][j]);
printf("\n");
}

printf("enter the source vertcex");
scanf("%d",&source);
diji(source);
printf("the shorted path and distance are shown below");
for(j=0;j<n;j++)
{
if(d[j]=99)
printf("is not reachable from%d-->%d",source,j);
else
short_path(source,j);
printf("\n");
}
}



