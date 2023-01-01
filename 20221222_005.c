#include <stdio.h>

int main(){
    float i, j=1, soma;
    for(i = 1; i <= 50; i += 1){
        soma += j/i;
        j += 2;
    }
    printf("O valor da soma eh de %.2f",soma);
}