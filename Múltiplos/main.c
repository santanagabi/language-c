#include <stdio.h>

int main(void) {
  int a, b;

  printf("\n Entre com 2 valores inteiros (A e B):");
  scanf("%d %d", &a, &b);
  
  if(a % b == 0 || b % a ==0){
    printf("\n São Multiplos");
  }else{
    printf("\n Não sao Multiplos");
  }

  return 0;
}