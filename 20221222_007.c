#include <stdio.h>

int main(){
    float MassaInicial, MassaFinal; 
    int hr, mn, s=0, r;

    printf("qual a massa inicial(em grama) do elemento?\n");
    scanf("%f", &MassaInicial);
    MassaFinal = MassaInicial;
    while(MassaInicial<0){
        printf("O valor colocado como massa inicial eh invalido\nTente novamente\nqual a massa inicial(em grama) do elemento?\n");
        scanf("%f", &MassaInicial);
    }
    while (MassaFinal >= 0.5){
    MassaFinal -= (MassaFinal / 2);
    s += 50;
    }

    hr = s / 3600;
    r = s % 3600;
    mn = r / 60;
    s = r % 60; 

    printf("Sua massa inicial foi de %.2f g\n", MassaInicial);
    printf("Sua massa final foi de %.2f g\n", MassaFinal);    
    printf("O tempo decorrido foi de %d:%d:%d", hr, mn, s);
    return 0;
}