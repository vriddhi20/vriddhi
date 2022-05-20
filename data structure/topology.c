#include<stdio.h>
int n,visited[10],count=0,a[10][10],k=0,topo[10];
int dfs(int v)
{
	int w;
	count++;
	visited[v]=count;
	for(w=0;w<n;w++)
		if(a[v][w]==1 && visited[w]==0)
			dfs(w);
	printf("%d\t",v);
	topo[k++]=v;
}
void main()
{
	int i,j,v;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	printf("Enter the adjacency matrix\n");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("Adjacency matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");		
	}
	printf("-----DFS Traversal-----\n");
	for(i=0;i<n;i++)
		visited[i]=0;
	for(i=0;i<n;i++)
		if(visited[i]==0)
			dfs(i);
	printf("\n");
	printf("-----Topological Sorting------\n");
	for(i=n-1;i>=0;i--)
		printf("%d\t",topo[i]);
	if(count==n)
	{
		printf("\nGraph is connected");
	}
	else
	{
		printf("\nGraph is disconnected");
	}
}


