#include <stdio.h>
#include <math.h> 

int main() {
float I1, I2, F1;
printf("Primeiro Número: \n");
scanf("%f", &I1);
printf("Segundo Número: \n");
scanf("%f", &I2);
printf("Terceiro Número: \n");
scanf("%f", &F1);
printf("O produto do dobro do primeiro com metade do segundo é de %.0f.", (2*I1)*(I2/2));
printf("\nA soma do triplo do primeiro com o terceiro é de %.2f.", (3*I1)+(F1));
printf("\nO terceiro elevado ao cubo é de %.2f.", pow(F1,3));
return 0;
}