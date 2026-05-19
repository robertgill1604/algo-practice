#include<stdio.h>
#include<stdlib.h>
int binary_search(int*a,int l,int h,int k);
int main(){
	int n,*a,i,k,l,h,r;

	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++){
	       scanf("%d",&a[i]);
	}
	scanf("%d",&k);
    l=0;
    h=n-1;
	r=binary_search(a,l,h,k);
	printf("%d",r);

	return 0;
}
int binary_search(int*a,int l,int h,int k){
	int mid=(l+h)/2;
	if(a[mid]==k){
		return mid;
	}
	else if(k<a[mid]){
		return binary_search(a,l,mid-1,k);
	}
	else if(a[mid]<k){
		return binary_search(a,mid+1,h,k);
	}
	return -1;
}
