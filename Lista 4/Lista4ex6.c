/* 6) Considere um vetor com 15 números inteiros lidos pelo teclado.
Faça um algoritmo para imprimir este vetor em ordem não-decrescente
utilizado o algoritmo BubbleSort. Utilize três procedimentos: um para
preencher o vetor, outro para ordenar o vetor e um terceiro para imprimir
o vetor antes e depois da ordenação. */

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
//BubbleSort Crescente
void ordenar(int vetor[]){
	int i, j, aux;
	for(i=0; i<tam; i++){
		for(j=0; j<tam-1; j++){
			if(vetor[j]>vetor[j+1]){
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
	}
}

void imprime(int vetor[]){
	int i;
	printf("\nVetor ordenado:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}
