#include <stdio.h>
int main(){
	float n1, maior, menor, m1, mediareal;
	int i;
	for (i=1; i<4; i++){
		printf("qual sua %d° nota: ", i);
		scanf("%f", &n1);
		if (i==1){
			maior = n1;
			menor = n1;
		}
		if (n1 > maior)
		maior = n1;
		if (n1 < menor)
		menor = n1;
		
		m1 += n1;
		}
		mediareal = m1/3;
		printf("\nA maior nota e %.2f\n", maior);
		printf("a menor nota e %.2f\n", menor);
		printf("a media foi de %.2f", mediareal);
}
