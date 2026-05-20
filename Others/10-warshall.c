#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                // printf("k=%d | i=%d | j=%d | a[i][j]=%d | a[i][k]=%d | a[k][j]=%d\t",k,i,j,a[i][j],a[i][k],a[k][j]);
                a[i][j]=a[i][j]||(a[i][k]&&a[k][j]);
                // printf("k=%d | i=%d | j=%d | a[i][j]=%d | a[i][k]=%d | a[k][j]=%d\n",k,i,j,a[i][j],a[i][k],a[k][j]);
            }
            printf("++++++++++++++++++++++++++++++ %d\n",i);
        }
        printf("------------------------------------------------------------------------ %d\n",k);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
