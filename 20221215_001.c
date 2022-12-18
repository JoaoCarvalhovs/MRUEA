#include <stdio.h>

int main() {
float p, s, ps;
printf("primeiro numero: ");
scanf("%f", &p);
printf("segundo numero: ");
scanf("%f", &s);
ps = p + s;
printf("A soma desses numeros é de %.1f", ps);
return 0;
}