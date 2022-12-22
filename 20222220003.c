#include <stdio.h>
int main(){
int num1, num2, i;
num2 = 0;
for (i=0; i<5; i++){
	scanf("%d", &num1);
	if (num1 % 2 != 0 && num1 > 100 && num1 < 200 ){
		num2 += num1;
	}
}
printf("%d", num2);
return 0;
}