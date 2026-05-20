#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int n,*a,i,k;
	clock_t s,e;
	double r;

	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++){
	       scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	s=clock();
	for(i=0;i<n;i++){
		if(a[i]==k){
			printf("%d",i);
			e=clock();
			r=((double)(e-s))/(CLOCKS_PER_SEC);
			printf("\n%.7f",r);
			return 0;
		}
	}

	printf("%d",-1);
	e=clock();
	r=((double)(e-s))/(CLOCKS_PER_SEC);
	printf("%f",r);
	return 0;
}
