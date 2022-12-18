#include <stdio.h>

int main() {
float C, F;
printf("quanto é a temperatura em farenheit?\n");
scanf("%f", &F);
C = (5 * (F-32) / 9);
printf("O valor da temperatura em celsius é de %.2f", C);
return 0;
}