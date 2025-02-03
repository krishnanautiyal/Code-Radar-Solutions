#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a>=1&&a<=12)
        if(a%2==0)
            if(a==2)
                printf("28");
                break;
            else if(a==8)
                printf("31");
                break;
            printf("30");
        else
            printf("31");
    else
        printf("Invalid Month");
}