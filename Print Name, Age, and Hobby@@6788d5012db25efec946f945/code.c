#include <stdio.h>

int main() {
    char name[234], hobby[323];
    int age;
    scanf("%s %s %d", &name,&hobby,&age);
    printf("Name: %s\nAge: %d\nHobby: %s",name,age,hobby);
}
