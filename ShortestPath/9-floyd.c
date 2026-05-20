#include<stdio.h>
#define INF 9999

int main()
{
    int n,i,j,k;
    int dist[10][10];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&dist[i][j]);

            if(i!=j && dist[i][j]==0)
            {
                dist[i][j]=INF;
            }
        }
    }

    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(dist[i][k] + dist[k][j] < dist[i][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }

    printf("Shortest Path Matrix:\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(dist[i][j]==INF)
            {
                printf("I ");
            }
            else
            {
                printf("%d ",dist[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}