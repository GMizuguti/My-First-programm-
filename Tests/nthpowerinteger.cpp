#include <stdio.h>

//this code gives you the nth (integer) power of any given number

int main (){
  float base, resultado = 1;
  int expoente;
  printf("Insira o valor da base (real)\n");
  scanf("%f", &base);
  printf("Insira o valor do expoente (inteiro positivo)\n");
  scanf("%d", &expoente);
  for (int i = 1; i <= expoente; ++i){
    resultado *= base;
  }
  printf("Resultado: %.2f\n", resultado);
  return 0;
}
