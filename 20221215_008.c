#include <stdio.h>

int main() {
float C, F;
printf("quanto é a temperatura em celsius?\n");
scanf("%f", &C);
F = (9 * (C) / 5) +32;
printf("O valor da temperatura em celsius é de %.2f", F);
return 0;
}