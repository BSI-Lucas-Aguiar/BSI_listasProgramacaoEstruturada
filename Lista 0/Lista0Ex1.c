/* 1) Fa�a um algoritmo para ler 20 n�meros inteiros e imprimir o maior deles.
Utilize uma fun��o para ler os n�meros e retornar para a fun��o main
o maior deles. O maior n�mero tem que ser impresso na fun��o main. */
#include <stdio.h>
#define tam 20

void preencheVetor(int vetor[]){
	int i;
	
	for(i=0; i<tam; i++){
		printf("\nInforme o %d valor: ", i+1);
		scanf("%d", &vetor[i]);
	}
}

int verificaMaior(int vetor[]){
	int i, maior;
	maior=vetor[0];
	for(i=0; i<tam; i++){
		if(vetor[i]>maior){
			maior=vetor[i];
		}
	}
	return maior;
}

int main(){
	int vetor[tam], maior;
	
	preencheVetor(vetor);
	maior = verificaMaior(vetor);
	
	printf("\nO maior valor e: %d", maior);
	
	return 0;
}
