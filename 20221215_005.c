#include <stdio.h>
#include <math.h> 

int main() {
float L, A, A2;
printf("Defina o lado do quadrado: ");
scanf("%f", &L);
A = pow(L,2);
A2 = A * 2;
printf("O valor do dobro da área do quadrado é de %.2f", A2);
return 0;
}