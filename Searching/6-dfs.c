#include<stdio.h>
#include <stdlib.h>
#define MAX 10
int v[MAX];
void dfs(int**t,int s,int n){
    int i;
    v[s]=1;
    printf("%d ",s);
    for(i=0;i<n;i++){
        if(!v[i]==1&&t[s][i]==1){
            dfs(t,i,n);
        }
    }
}
int main(){
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

    dfs(t,0,n);
    return 0;
}