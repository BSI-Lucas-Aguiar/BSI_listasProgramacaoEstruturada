/* 15) Faça um algoritmo que leia (na função main) um número inteiro n (n >= 0)
e imprima o seu fatorial (n!). Utilize uma função para calcular o fatorial de n.
A impressão do resultado tem que ser realizada na função main.
Obs.: O fatorial de 0 é igual a 1 (0! = 1). */
#include <stdio.h>

int calculaFatorial(int n){
	int fatorial;
	for(fatorial=1; n>1; n=n-1){
    	fatorial= fatorial*n;
  	}

	return fatorial;
}

int main(){
	int n;

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<0);
	
	printf("\nO Fatorial de %d e: %d", n, calculaFatorial(n));
	
	return 0;
}
