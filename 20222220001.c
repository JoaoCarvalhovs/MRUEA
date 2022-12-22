#include <stdio.h>

int main(){
int i, num , num2;
num = 0;
num2 = 0;
for (i=0; i<5; i++){
	printf("escolha os valores da soma: ");
	scanf("\n%d", &num);
	if(num % 2 !=0)
		num2 += num;
	}
printf("o print e %d", num2);
return 0;
}








