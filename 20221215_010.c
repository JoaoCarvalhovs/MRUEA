#include <stdio.h>

int main() {
float A, P;
printf("Qual sua altura em Metros?\n");
scanf("%f", &A);
P = (72.7 * A) - 58;
printf("seu peso ideal é %.2f", P);
return 0;
}