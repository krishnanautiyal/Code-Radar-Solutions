#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i++){
        for(j=i;j<i;j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
}