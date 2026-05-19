#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,*a,i,k;

	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++){
	       scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n;i++){
		if(a[i]==k){
			printf("%d",i);
			return 0;
		}
	}
	printf("%d",-1);
	return 0;
}
