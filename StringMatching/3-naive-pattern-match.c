#include<stdio.h>
#include<string.h>

int main(){
	char text[1000], pat[1000];
	int n,m,i;


	scanf("%s",text);
	scanf("%s",pat);

	n = strlen(text);
	m = strlen(pat);

	for(i=0;i<=n-m;i++){
		int j=0;
		for(j=0;j<m;j++){

			if(text[i+j] != pat[j]){
				break;
			}
		}

		if(j == m){
			printf("%d ",i);
		}
	}


	return 0;
}
