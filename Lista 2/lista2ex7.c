/* 7) Fa�a um algoritmo para verificar se uma matriz quadrada 6 x 6 gerada aleatoriamente com n�meros de 1 at� 50 � sim�trica. 
Utilize um procedimento para a gera��o da matriz e uma fun��o para a verifica��o. De acordo com o retorno da fun��o deve-se imprimir 
na fun��o main: MATRIZ SIMETRICA ou MATRIZ NAO SIMETRICA. */

#include <stdio.h>
#include <time.h>
#define linha 6
#define coluna 6

int verifica(int matriz[][coluna]);
void preenche(int matriz[][coluna]);

int main(){
	int matriz[linha][coluna], resultado=0;
	
	preenche(matriz);
	resultado=verifica(matriz);
	if(resultado==(linha*coluna)){
		printf("\n A matriz e simetrica.");
	}else{printf("\nA matriz nao e simetrica.");
	}
	return 0;
}

void preenche(int matriz[][coluna]){
	int i, j;
	srand(time(NULL));
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz[i][j]=rand()%50+1;
		}
	}
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int verifica(int matriz[][coluna]){
	int i, j, resultado=0;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if(matriz[i][j]==matriz[j][i]){
				resultado++;
			}
		}
	}
	return resultado;
}
