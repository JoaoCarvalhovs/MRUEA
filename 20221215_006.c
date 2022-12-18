#include <stdio.h>

int main() {
float GH, HM, A2;
printf("quanto você ganha por hora?\n");
scanf("%f", &GH);
printf("Quantas horas você trabalha por mês?:\n");
scanf("%f", &HM);
A2 = GH * HM;
printf("O valor do seu salário final é de %.2f", A2);
return 0;
}