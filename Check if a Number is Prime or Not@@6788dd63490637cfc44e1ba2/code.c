#include <stdio.h>

int main() {
    int a, b=1;
    scanf("%d",&a);
    
    if(a<=1){
        b=0;
    }
    else{
        for(int i =2, i*i<=a;i++){
            if(a%i == 0){
                b=0;
                break;
            }
                
        }
            
    
    }
    if(b)
        printf("Prime");
    else
        printf("Not Prime");
    
}