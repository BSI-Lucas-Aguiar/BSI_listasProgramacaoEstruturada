/* 2) Fa�a um algoritmo para ler (na fun��o main) um n�mero inteiro n (n > 1)
e imprimir a soma dos n�meros inteiros pares de 1 at� n. Utilize uma fun��o
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
