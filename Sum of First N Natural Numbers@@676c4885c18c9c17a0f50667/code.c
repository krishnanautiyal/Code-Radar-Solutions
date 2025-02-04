#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int total = 0;
    for(int i =1; i <n+1; i++){
        total+=i;
    }
    printf("%d", total);
}
