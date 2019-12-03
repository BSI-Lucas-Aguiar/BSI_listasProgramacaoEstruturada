/* 2) Fa�a um algoritmo para ler (pelo teclado) um vetor com 15 elementos inteiros e 
depois inverter este mesmo vetor, sem usar um vetor auxiliar. Utilize tr�s procedimentos: 
um para preencher o vetor, outro para invert�-lo e o terceiro para imprimi-lo ap�s a invers�o. 
Obs.: O objetivo desse exerc�cio n�o � imprimir o vetor em ordem inversa, mas sim colocar os elementos 
dentro do vetor em ordem inversa. */

#include <stdio.h>
#define tam 15

void preenche(int vetor[]);
void inverte(int vetor[]);
void imprime(int vetor[]);

int main(){
	int vetor[tam];
	
	preenche(vetor);
	inverte(vetor);
	imprime(vetor);
	
	return 0;
}

void preenche(int vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("Informe o %d valor do vetor:\n", i+1);
		scanf("%d", &vetor[i]);
	}
}

void inverte(int vetor[]){
	int i=0, aux, j=tam-1;
	
	while(i<j){
		aux=vetor[i];
		vetor[i]=vetor[j];
		vetor[j]=aux;
		j--;
		i++;
	}
}

void imprime(int vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}
