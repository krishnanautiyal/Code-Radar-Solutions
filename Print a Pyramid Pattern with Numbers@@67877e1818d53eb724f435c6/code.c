#include <stdio.h>
int main(){
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<n-i-1;j++){
            printf(" ");
        }
        for(k=1;k<=i+1;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}