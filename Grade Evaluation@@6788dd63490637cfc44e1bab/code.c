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
        case 'B':
        printf("Good");
        case 'C':
        printf("Average");
        case 'D';
        printf("Below Average");
        case 'F':
        printf("Fail");
        default:
        printf("Invalid grade");
    }
}