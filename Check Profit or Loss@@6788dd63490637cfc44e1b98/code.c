#include <stdio.h>

int main(){
    int cp,sp;
    scanf("%d %d",&cp,&sp);
    int net = sp-cp;
    if(net>0)
        printf("Profit");
    else if(net<0)
        printf("Loss");
    else if(net==0)
        printf("No Profit No Loss");
}