#include <stdio.h>
int main(){
    int n,i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=i+1;k++){
            printf("%d ",k);
        }
        printf("\n");
    }
}