#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b = a%2;
    if(b==0)
        printf("Even");
    else
        printf("Odd");
}