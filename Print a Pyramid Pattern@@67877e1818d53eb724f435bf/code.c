#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            printf(" ");
        }
        for(int k=i;k<2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}