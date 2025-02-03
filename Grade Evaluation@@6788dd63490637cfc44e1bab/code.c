#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    switch(a){
        case 'A':
        printf("Excellent");
        break;
        case 'B':
        printf("Good");
        break;
        case 'C':
        printf("Average");
        break;
        case 'D':
        printf("Below Average");
        break;
        case 'F':
        printf("Fail");
        break;
        default:
        printf("Invalid grade");
        break;
    };
}