#include <stdio.h>

int main(){
int i, num , num2;
num = 0;
num2 = 0;
for (i=0; i<50; i++){
	printf("escolha os valores: ");
	scanf("%d", &num);
	if(num % 2 != 0)
		num2 += num;
	}
printf("a soma dos impares e de %d", num2);
}