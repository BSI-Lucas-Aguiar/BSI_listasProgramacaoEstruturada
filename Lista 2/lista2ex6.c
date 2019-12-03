/* 6) Fa�a um algoritmo para imprimir o resultado da multiplica��o de um n�mero lido pelo teclado 
(lido na fun��o main) por uma matriz de inteiros 2 � 8 gerada aleatoriamente com n�meros de 0 at� 29. 
A matriz que ir� receber o resultado da multiplica��o do n�mero pela matriz deve ser criada na fun��o main. 
Utilize tr�s procedimentos: um para a gera��o da matriz, outro para calcular a multiplica��o e um terceiro 
para imprimir a matriz com o resultado da multiplica��o. */

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
