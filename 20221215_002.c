#include <stdio.h>

int main() {
float p, s, t, q, pstq;
printf("primeira nota: ");
scanf("%f", &p);
printf("segunda nota: ");
scanf("%f", &s);
printf("terceira nota: ");
scanf("%f", &t);
printf("quarta nota: ");
scanf("%f", &q);
pstq = (p + s + t + q) / 4;
printf("A média das notas é de %.1f", pstq);
return 0;
}