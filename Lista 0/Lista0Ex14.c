/* 14) Faça um algoritmo que leia (na função main) dois valores inteiros X e Y,
calcule e imprima o resultado de X^Y. Utilize uma função para calcular o resultado
de X^Y. A impressão do resultado tem que ser realizada na função main.
Obs.: Não utilize qualquer função pronta para exponenciação (ou seja, não utilize a função pow). */
#include <stdio.h>

int calculaExponente(int x, int y){
	int i, base;
	base=x;
	for(i=0; i<y-1; i++){
		x=x*base;
	}
	
	return x;
}

int main(){
	int x, y;
	printf("\nInforme o valor de X:\n");
	scanf("%d", &x);
	printf("\nInforme o valor de Y:\n");
	scanf("%d", &y);
	
	printf("\n%d elevado a %d: %d", x, y, calculaExponente(x, y));
	
	return 0;
}
