#include <stdio.h>

int main(){
	int num1, num2, num3, i;
	for (i=0; i<20; i++){
		scanf("%d", &num1);
		if (num1 > num2)
			num2 = num1;
		if (num1 < num3)
			num3 = num1;		
	}
	printf("O maior numero e %d\n", num2);
	printf("O menor numero e %d", num3);
return 0;
}