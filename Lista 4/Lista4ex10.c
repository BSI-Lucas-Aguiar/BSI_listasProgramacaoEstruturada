/* 10) Considere um vetor com 15 números inteiros lidos pelo teclado.
Faça um algoritmo para imprimir este vetor em ordem não-decrescente utilizado o algoritmo InsertionSort.
Utilize três procedimentos: um para preencher o vetor, outro para ordenar o vetor e um terceiro para imprimir
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
//InsertionSort Crescente
void ordenar(int vetor[]){
	int i, j, aux, valor;
	for(i=1; i<tam; i++){
		valor=vetor[i];
		for(j=i-1;(j>=0)&&(valor<vetor[j]); j--){
			vetor[j+1]=vetor[j];
		}
		vetor[j+1]=valor;
	}
}

void imprime(int vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}
