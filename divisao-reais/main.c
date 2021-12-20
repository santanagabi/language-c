#include <stdio.h>

int main(void) {
  float n1, n2; 

  printf("Digite o dividendo:\n");
  scanf("%f", &n1);
  printf("Digite o divisor:\n");
  scanf("%f", &n2);

  //Divisão
  printf("\n A divisão de %.2f e %.2f = %.2f", n1, n2, n1 / n2);

  return 0;
}