#include <stdio.h>
#include <math.h> 

int main() {
float R, A;
printf("Defina o raio do circulo: ");
scanf("%f", &R);
A = 3.14 * pow(R, 2);
printf("O valor da área do circulo é de %.2f", A);
return 0;
}