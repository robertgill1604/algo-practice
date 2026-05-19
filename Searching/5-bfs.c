#include<stdio.h>
#include <stdlib.h>
#define MAX 10
int q[MAX];
//int g[MAX][MAX];
int v[MAX];
int f=-1,r=-1;
void enq(int x){
	if(f==-1)f=0;
	q[++r]=x;
}
int deq(){
	return q[f++];
}
int isEmpty(){
	return f>r;
}
void bfs(int**g,int s,int n){
	int i;
	enq(s);
	v[s]=1;
	while(!isEmpty()){
		int h=deq();
		printf("%d ",h);

		for(i=0;i<n;i++){
			if(g[h][i]==1&&v[i]==0){
				enq(i);
				v[i]=1;
			}
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
	bfs(t,0,n);

	free(t);
	
	return 0;

}