#include <stdio.h>

int main(){
    int pares = 0, impares = 0, i = 0, num;
    while(i < 2){
        printf("qual o numero da vez?\n");
        scanf("%d", &num);
        if(num<=1000){
            if(num % 2 == 0){
                pares += num;
            }
            if(num % 2 != 0){
                impares += num;
            }
        }
        if(num>1000){
            i=2;
        }
    }
    printf("A soma dos pares e de %d\n" , pares);
    printf("A soma dos impares e de %d" , impares);
    return 0;
}
