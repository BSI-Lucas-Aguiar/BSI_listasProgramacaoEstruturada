/* 8) Fa�a um algoritmo para calcular e imprimir a matriz transposta de uma matriz 7 x 3 gerada aleatoriamente com n�meros de 1 at� 25. 
A matriz que ir� receber o resultado da transposta deve ser criada na fun��o main. Utilize tr�s procedimentos: um para a gera��o da matriz, 
outro para calcular a transposta e um terceiro para imprimir a matriz transposta. */

#include <stdio.h>
#include <time.h>
#define linha 7
#define coluna 3

void preenche(int matriz1[][coluna]);
void calculo(int matriz1[][coluna], int matriz2[][linha]);
void impressao(int matriz2[][linha]);

int main(){
	int matriz1[linha][coluna], matriz2[coluna][linha];
	
	preenche(matriz1);
	calculo(matriz1, matriz2);
	impressao(matriz2);
	
	return 0;
}

void preenche(int matriz1[][coluna]){
	int i, j;
	srand(time(NULL));
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz1[i][j]=rand()%25+1;	
		}
	}
	printf("Matriz impressa:\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matriz1[i][j]);
		}
		printf("\n");
	}
}

void calculo(int matriz1[][coluna], int matriz2[][linha]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz2[j][i]=matriz1[i][j];
		}
	}
}

void impressao(int matriz2[][linha]){
	int i, j;
	printf("\nMatriz transposta impressa:\n");
	for(i=0; i<coluna; i++){
		for(j=0; j<linha; j++){
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}
}
