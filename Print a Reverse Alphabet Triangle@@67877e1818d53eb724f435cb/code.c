#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=n;j>0;j--){
            printf("%c ",'A'+i);
        }
        printf("\n");
    }
}