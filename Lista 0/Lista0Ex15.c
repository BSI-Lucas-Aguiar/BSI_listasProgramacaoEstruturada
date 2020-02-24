/* 15) Fa�a um algoritmo que leia (na fun��o main) um n�mero inteiro n (n >= 0)
e imprima o seu fatorial (n!). Utilize uma fun��o para calcular o fatorial de n.
A impress�o do resultado tem que ser realizada na fun��o main.
Obs.: O fatorial de 0 � igual a 1 (0! = 1). */
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
