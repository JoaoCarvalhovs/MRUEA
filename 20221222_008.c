#include <stdio.h>
int main() {
  int cat1, cat2, hip, x;
  printf("Digite o tamanho maximo da hipotenusa: \n");
  scanf("%d", &hip);
  while(hip <= 0){
  printf("Comprimentos para a hipotenusa nao podem ser nulos e nem negativos! Tente novamente.\nDigite o tamanho maximo da hipotenusa: \n");
  scanf("%d", &hip);
  }
  for (cat1 = 1; cat1 <= hip; cat1++){
  for (cat2 = 1; cat2 <= cat1; cat2++){
  for(x= 1; x<=hip; x++){
    if ((cat2*cat2) + (cat1*cat1) == x*x){
      printf("Catetos %d e %d tem como hipotenusa = %d\n", cat1, cat2, x);
    }
  }
  }
  }
  return 0;
}