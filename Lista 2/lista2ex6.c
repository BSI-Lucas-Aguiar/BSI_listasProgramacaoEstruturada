/* 6) Faça um algoritmo para imprimir o resultado da multiplicação de um número lido pelo teclado 
(lido na função main) por uma matriz de inteiros 2 × 8 gerada aleatoriamente com números de 0 até 29. 
A matriz que irá receber o resultado da multiplicação do número pela matriz deve ser criada na função main. 
Utilize três procedimentos: um para a geração da matriz, outro para calcular a multiplicação e um terceiro 
para imprimir a matriz com o resultado da multiplicação. */

#include <stdio.h>
#include <time.h>
#define linha 2
#define coluna 8

void preenche(int matriz1[][coluna]);
void preenche2(int matriz1[][coluna], int matriz2[][coluna], int numero);
void imprime(int matriz2[][coluna]);

int main(){
	int matriz1[linha][coluna], matriz2[linha][coluna], numero=1;
	
	preenche(matriz1);
	printf("\nInforme o numero a ser multiplicado pela matriz:\n");
	scanf("%d", &numero);
	preenche2(matriz1, matriz2, numero);
	imprime(matriz2);
	
	return 0;
}

void preenche(int matriz1[][coluna]){
	int i, j;
	srand(time(NULL));
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz1[i][j]=rand()%29;
		}
	}
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matriz1[i][j]);
		}
		printf("\n");
	}
}

void preenche2(int matriz1[][coluna], int matriz2[][coluna], int numero){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz2[i][j]=matriz1[i][j]*numero;
		}
	}
}

void imprime(int matriz2[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}
}
