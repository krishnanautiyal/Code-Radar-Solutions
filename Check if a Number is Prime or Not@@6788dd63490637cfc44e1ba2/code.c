#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==0 && n==1){
        printf("Not Prime");
    }
    if(n==2){
        printf("Prime");
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
        printf("Not Prime");
        break;
        else
        printf("Prime");
    }
}