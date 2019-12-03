/* 16) Considere um número inteiro n (n >= 0) lido pelo teclado.
Faça um algoritmo recursivo para calcular o fatorial de n. */

#include <stdio.h>

int fatorial(int numero);

int main(){
	int numero=-1;

	while(numero<0){
	printf("Informe o numero:\n");
	scanf("%d", &numero);
	}
	printf("O fatorial de %d e: %d", numero, fatorial(numero));
	
	return 0;
}

int fatorial(int numero){
	if((numero==0)||(numero==1)){
		return 1;
	}else{
		return fatorial(numero-1)*numero;
	}
}
