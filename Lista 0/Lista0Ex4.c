/* 4) Considere uma sequência de números inteiros, positivos e diferentes de zero fornecida pelo teclado.
Faça um algoritmo para calcular e imprimir (na função main) a quantidade e a soma dos pares e a quantidade
e a soma dos ímpares. Defina o fim da sequência com um número negativo ou igual a zero. Utilize uma função
para informar se um número é par ou ímpar. Se o número for par, a função deve retornar 1. Se o número for ímpar,
a função deve retornar 0. O retorno da função tem que ser na função main( ). */
#include <stdio.h>
#define tam 5

int verifica(int numero){
	if((numero%2)==0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int vetor[tam], i, par=0, impar=0;
	
	for(i=0; i<tam; i++){
		printf("Informe o %d numero:\n", i+1);
		do{
			scanf("%d", &vetor[i]);
		}while(vetor[i]<=0);
		
		if(verifica(vetor[i])==1){
			par+=vetor[i];
		}else{
			impar+=vetor[i];
		}
	}
	
	printf("\nSoma dos Pares: %d\nSoma dos Impares: %d", par, impar);
	
	return 0;
}
