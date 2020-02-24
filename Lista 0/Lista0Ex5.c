/* 5) Faça um algoritmo que leia (na função main) um número n e divida-o por 2 sucessivamente até
que o resultado seja menor que 1. Imprima o resultado (também na função main) da última divisão efetuada.
Utilize uma função para retornar o resultado da divisão de um número por 2.  */
#include <stdio.h>

int main(){
	float n;
	
	printf("Informe um numero:\n");
	scanf("%f", &n);
	
	do{
		n=(n/2);
	}while(n>=1);
	
	printf("\nValor restante %.2f", n);
	
	return 0;
}
