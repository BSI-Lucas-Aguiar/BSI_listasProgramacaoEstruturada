/* 12) Considere um vetor com 15 números inteiros lidos pelo teclado.
Faça um algoritmo para imprimir este vetor em ordem não-decrescente utilizado o algoritmo QuickSort.
Utilize três procedimentos: um para preencher o vetor, outro para ordenar o vetor e um terceiro para
imprimir o vetor antes e depois da ordenação. */

#include <stdio.h>
#define tam 15

void preenche(int vetor[]);
void imprime(int vetor[]);
void quickSort(int vetor[], int inicio, int fim);
int particiona(int vetor[], int inicio, int fim);

int main(){
	int vetor[tam], inicio=0, fim=tam-1;
	preenche(vetor);
	imprime(vetor);
	quickSort(vetor, inicio, fim);
	imprime(vetor);
	
	return 0;
}

void preenche(int vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("\nInforme o %d valor:\n", i+1);
		scanf("%d", &vetor[i]);
	}
}

void imprime(int vetor[]){
	int i;
	printf("\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}

void quickSort(int vetor[], int inicio, int fim){
	int pivo;
	
	if(inicio<fim){
		pivo=particiona(vetor, inicio, fim);
		quickSort(vetor, inicio, pivo-1);
    	quickSort(vetor, pivo+1, fim);
	}
}

int particiona(int vetor[], int inicio, int fim){
	int pivo = vetor[inicio], i = inicio, j, aux;

	for(j = inicio+1; j <= fim; j++){
		if(vetor[j] <= pivo){
			i++;
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;

		}
	}
	aux = vetor[i];
	vetor[i] = vetor[inicio];
	vetor[inicio] = aux;
	
	return i;
}
