#include<stdio.h>
#include <stdlib.h>
void heapify(int a[],int n,int i);
void heapSort(int a[],int n);
void display(int*a,int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
int main(){
	int n,*a,i;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	heapSort(a,n);
	for(i=0;i<n;i++){
	 printf("%d ",a[i]);
	}
	free(a);
	return 0;
}
void heapSort(int a[],int n){
	int i;
	for(i=n/2-1;i>=0;i--){
		display(a,n);
		heapify(a,n,i);
	}
	display(a,n);
	for(i=n-1;i>0;i--){
		int t=a[0];
		a[0]=a[i];
		a[i]=t;
		printf(".......");
		display(a,n);
		heapify(a,i,0);

	}
}
void heapify(int a[],int n,int i){
	int l=2*i+1;
	int r=2*i+2;
	int lg=i;
	if(l<n&&a[l]>a[lg]){
		lg=l;
	}
	if(r<n&&a[r]>a[lg]){
		lg=r;
	}
	if(lg!=i){
		int t=a[lg];
		a[lg]=a[i];
		a[i]=t;
		heapify(a,n,lg);
	}
}