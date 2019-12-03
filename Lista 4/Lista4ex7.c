/* 7) Considere um vetor com 20 n�meros inteiros gerados aleatoriamente de 1 at� 30.
Fa�a um algoritmo para imprimir este vetor em ordem n�o-crescente utilizado o algoritmo BubbleSort.
Utilize tr�s procedimentos: um para preencher o vetor, outro para ordenar o vetor e um terceiro para
imprimir o vetor antes e depois da ordena��o */

#include <stdio.h>
#include <time.h>
#define tam 20

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
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vetor[i]=rand()%30+1;
	}
}
//BubbleSort Decrescente
void ordenar(int vetor[]){
	int i, j, aux;
	for(i=0; i<tam; i++){
		for(j=0; j<tam-1; j++){
			if(vetor[j]<vetor[j+1]){
				aux=vetor[j];
				vetor[j]=vetor[j+1];
				vetor[j+1]=aux;
			}
		}
	}
}

void imprime(int vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}
