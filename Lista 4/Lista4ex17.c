/* 17) Considere dois números inteiros a e b (b >= 0) lidos pelo teclado.
Faça um algoritmo recursivo para calcular o valor de a^b. */
#include <stdio.h>

int calcularPotencia(int a, int b);

int main(){
  int a, b = -1;

  printf("Insira um valor para a: ");
  scanf("%d", &a);
  printf("Insira um valor para b(b >= 0): ");
  while (b < 0){
    scanf("%d", &b);
    if (b < 0) printf("\nNumero invalido, insira outro numero: ");
  }

  printf("\n\na^b = %d", calcularPotencia(a, b));

  return 0;
}

int calcularPotencia(int a, int b){
	if(b==0){
		return 1;
	}else{
		if(b == 1){
			return a;
		}else{
			return a * calcularPotencia(a, b-1);
		}
	}
}
