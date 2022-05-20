#include<stdio.h>
int n, visited[10],count=0;
int a[10][10];

int dfs(int v)
{
	int w;
	count++;
	visited[v]=count;
	for(w=0;w<n;w++)
		if(a[v][w]==1 && visited[w]==0)
			dfs(w);
	printf("%d\t",v);
}

void main()
{
	int i,j;
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	printf("Enter the undirected graph as adjecency matrix:\n");
	for (i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	printf("\nAdjecency Matrix-----\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	printf("The DFS traversal.....\n");
	for(i=0;i<n;i++)
		visited[i]=0;
	dfs(0);
	if(count==n)
	{
		printf("\nGraph is connected");
	}
	else
	{
		printf("\nGraph is disconnected");
	}
}
