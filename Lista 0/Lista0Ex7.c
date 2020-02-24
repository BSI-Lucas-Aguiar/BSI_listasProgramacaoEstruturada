/* 7) Considere uma sequ�ncia de n n�meros reais positivos lidos pelo teclado.
Fa�a um algoritmo que utiliza um procedimento para calcular e imprimir a soma e a
subtra��o do maior e menor valores encontrados nesta sequ�ncia. A quantidade n de
n�meros a serem lidos dever� ser informada pelo usu�rio na fun��o main e os resultados
(soma e subtra��o) impressos com 2 casas decimais dentro do procedimento. */
#include <stdio.h>

void calculaMaiorMenor(int vetor[], int n){
	int maior=vetor[0], menor=vetor[0], i;
	for(i=0; i<n; i++){
		if(vetor[i]>maior){
			maior=vetor[i];
		}
		if(vetor[i]<menor){
			menor=vetor[i];
		}
	}
	printf("\nMaior valor: %d\nMenor valor: %d", maior, menor);
}

int main(){
	int i, n;
	
	do{
		printf("\nInforme a quantidade de numeros:\n");
		scanf("%d", &n);
	}while(n<=0);
	
	int vetor[n];
	
	for(i=0; i<n; i++){
		do{
			printf("\nInforme o valor %d:\n", i+1);
			scanf("%d", &vetor[i]);
		}while(vetor[i]<0);
	}
	
	calculaMaiorMenor(vetor, n);
	
	return 0;
}
