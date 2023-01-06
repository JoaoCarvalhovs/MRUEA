#include <stdio.h>
int intervalo(int xy){
    while (xy < 0 || xy > 1000){
        printf("selecone um valor valido entre 0 e 1000\ntente novamente\ndefina o valor da variavel: ");
        scanf("%d", &xy);
    }
    return xy;
}

int menor(int num1,int num2){
    if (num1>num2){
        return num2;
    }
    return num1;
}

float porcentagem(float valor, float total){
    float result;
    result = (100 * valor)/total;
    return result;
}

float diferenca(float num1,float num2){
    float result;
    result = num1 - num2;
    return result;
}
int main(){
    int x, y, intv, meno;
    float pctg, dif;
    printf("qual o valor de x: ");
    scanf("%d", &x);
    intv = intervalo(x);
    printf("qual o valor de y: ");
    scanf("%d", &y);
    intv = intervalo(y);
    meno = menor(x,y);
    pctg = porcentagem(meno,x+y);
    dif = diferenca(x,y);
    if (dif<0){
        dif *= -1;
    }
    printf("O percentual do menor em relacao ao maior e de %.2f\n", pctg);
    printf("O modulo da diferenca entre o maior e o menor e de %.2f", dif);
}