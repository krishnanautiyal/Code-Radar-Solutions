#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    getchar();
    scanf("%c",&c);
    switch(c){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
        if(b!=0)
            printf("%d",a/b);
        else
            printf("error");
            break;
        default:
            printf("error");}   }










