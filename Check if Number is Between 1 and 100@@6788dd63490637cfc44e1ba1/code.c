#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(1<=a && a<=100)
        printf("In Range");
    else
        printf("Out of Range");
}