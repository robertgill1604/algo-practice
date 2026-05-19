#include<stdio.h>
#include<stdlib.h>
#define INF 9999


int minDistance(int dist[], int visited[],int n)
{
    int min = INF;
    int min_index;
    int i;

    for(i=0;i<n;i++)
    {
        if(visited[i]==0 && dist[i]<min)
        {
            min = dist[i];
            min_index = i;
        }
    }

    return min_index;
}

void dijkstra(int **g, int src,int n)
{
    int *dist;
    int visited[n];
    int i,j,u;

    for(i=0;i<n;i++)
    {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0;

    for(i=0;i<n-1;i++)
    {
        u = minDistance(dist,visited,n);

        visited[u] = 1;

        for(j=0;j<n;j++)
        {
            if(visited[j]==0 &&
               g[u][j]!=0 &&
               dist[u]!=INF &&
               dist[u] + g[u][j] < dist[j])
            {
                dist[j] = dist[u] + g[u][j];
            }
        }
    }

    printf("Vertex\tDistance\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t%d\n", i, dist[i]);
    }
}

int main()
{
    // int graph[V][V] = {
    //     {0,4,2,0},
    //     {4,0,1,5},
    //     {2,1,0,8},
    //     {0,5,8,0}
    // };
    int **t,n,i,j;
	
	scanf("%d",&n);
	t=(int **)malloc(n*sizeof(int*));
	for(i=0;i<n;i++){
	       t[i]=(int*)malloc(n*sizeof(int));
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&t[i][j]);
		}
	}


    dijkstra(t,0,n);

    return 0;
}