/* 1) Faça um algoritmo para ler 20 números inteiros e imprimir o maior deles.
Utilize uma função para ler os números e retornar para a função main
o maior deles. O maior número tem que ser impresso na função main. */
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
