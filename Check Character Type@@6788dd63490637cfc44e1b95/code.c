#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if(a>='a' && a<='z')
        switch(a){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Vowel");
                break;
            default:
                printf("Consonant");}
    else if(a>=0 && a<=9)
        printf("Digit");
    else
        printf("Special Character");
}