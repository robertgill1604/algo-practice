#include<stdio.h>
#include<stdlib.h>

int main(){

	int n,*a,i;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++){
		int k=a[i],j=i-1;
		while(j>=0&&a[j]>k){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=k;
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}

	return 0;
}
