#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1 || i==n|| j==1 || j==n){
            for(j=1;j<=n;j++){
                printf("*");
            }
        }
        else printf(" ");
        printf("\n");
    }
}