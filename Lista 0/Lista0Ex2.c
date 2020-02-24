/* 2) Faça um algoritmo para ler (na função main) um número inteiro n (n > 1)
e imprimir a soma dos números inteiros pares de 1 até n. Utilize uma função
para calcular a soma e retornar esse valor para o main, onde o mesmo deve ser impresso. */
#include <stdio.h>

int verifica(int n){
	int soma=0, i;
	
	for(i=0; i<=n; i++){
		if((i%2)==0){
			soma+=i;
		}
	}
	
	return soma;
}

int main(){
	int n=-1, soma=0;
	
	do{
		printf("Informe um numero:\n");
		scanf("%d", &n);
	}while(n<=0);
	
	printf("\nSoma de todos os numeros pares ate N: %d", verifica(n));
	
	return 0;
}
