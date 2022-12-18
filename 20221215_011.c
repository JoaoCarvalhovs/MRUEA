#include <stdio.h>

int main() {
float GH, HM, SB, INSS, IR, SD, SL;
printf("quanto você ganha por hora?\n");
scanf("%f", &GH);
printf("Quantas horas você trabalha por mês?:\n");
scanf("%f", &HM);
SB = GH * HM;
INSS = (11 * SB / 100);
IR = (8 * SB / 100);
SD = (5 * SB / 100);
SL = SB - (INSS + SD + IR);
printf("O valor do seu salário bruto é de %.2f", SB);
printf("\nO valor pago ao INSS foi de %.2f", INSS);
printf("\nO valor pago ao sindicato foi de %.2f", SD);
printf("\nO valor do seu salário liquido é de %.2f", SL);
return 0;
}