/* 7) Faça um algoritmo que leia pelo teclado os 15 números de um vetor do tipo inteiro e imprima na 
tela o maior elemento desse vetor e a posição em que ele se encontra. Utilize dois procedimentos: 
um para preencher o vetor e outro para imprimir as informações. Obs.: Caso o maior elemento apareça 
mais de uma vez no vetor, a posição a ser impressa é a do último maior elemento. */

#include <stdio.h>
#define tam 15

void preenche(int vetor[]);
void imprime(int vetor[]);

int main(){
	int vetor[tam];
	
	preenche(vetor);
	imprime(vetor);
	
	return 0;
}

void preenche(int vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("Informe o %d valor:\n", i+1);
		scanf("%d", &vetor[i]);
	}
}

void imprime(int vetor[]){
	int i, maior=vetor[0], posicao=0;
	for(i=0; i<tam; i++){
		if(maior<=vetor[i]){
			maior=vetor[i];
			posicao=i;
		}
	}
	printf("Vetor impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
	printf("\nMaior valor: \n%d\n Na posicao: \n%d ", maior, posicao+1);
}
