/* 14) Fa�a um algoritmo que leia (na fun��o main) dois valores inteiros X e Y,
calcule e imprima o resultado de X^Y. Utilize uma fun��o para calcular o resultado
de X^Y. A impress�o do resultado tem que ser realizada na fun��o main.
Obs.: N�o utilize qualquer fun��o pronta para exponencia��o (ou seja, n�o utilize a fun��o pow). */
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
