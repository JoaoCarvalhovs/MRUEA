#include <stdio.h>

int main() {
float m, cm;
printf("Dê um valor em metros: ");
scanf("%f", &m);
cm = m * 100;
printf("%.2f metros são %.2f centimetros", m, cm);
return 0;
}