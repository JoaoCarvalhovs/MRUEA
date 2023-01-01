#include <stdio.h>

int main(){
    int i, num=0, soma=0;
    printf("Verifique se um numero eh perfeito: \n");
    scanf("%d", &num);

    for (i = 1; i<num; i++){
        if (num%i == 0){
            soma += i;
        }
    }
    if (num != 0 && num==soma){
        printf("O numero %d eh perfeito!\n", num);
    }else {
        printf("O numero %d nao eh perfeito.\n", num);
    }

    return 0;
}
