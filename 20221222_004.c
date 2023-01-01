#include <stdio.h>

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    if(((num % 2 == 0)||(num % 3 == 0)||(num % 5 == 0)||(num % 7 == 0))&&(num != 2)&&(num != 3)&&(num != 5)&&(num != 7)){
        printf("o numero %d nao eh primo", num);
    }else{
        printf("o numero %d eh primo", num);
    }
    return 0;
}