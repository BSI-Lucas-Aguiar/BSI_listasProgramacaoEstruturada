/* 8) Considere um vetor com 15 números inteiros lidos pelo teclado.
Faça um algoritmo para imprimir este vetor em ordem não-decrescente utilizado o algoritmo SelectionSort.
Utilize três procedimentos: um para preencher o vetor, outro para ordenar o vetor e um
terceiro para imprimir o vetor antes e depois da ordenação. */

#include <stdio.h>
#define tam 15

void preenche(int vetor[]);
void ordenar(int vetor[]);
void imprime(int vetor[]);

int main(){
	int vetor[tam];
	preenche(vetor);
	ordenar(vetor);
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
//SelectionSort Crescente
void ordenar(int vetor[]){
	int i, j, aux, min;
	for(i=0; i<tam-1; i++){
		min=i;
		for(j=i+1; j<tam; j++){
			if(vetor[j]<vetor[min]){
				min=j;
			}
		}
		aux=vetor[i];
		vetor[i]=vetor[min];
		vetor[min]=aux;
	}
}

void imprime(int vetor[]){
	int i;
	printf("\nVetor ordenado:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}
