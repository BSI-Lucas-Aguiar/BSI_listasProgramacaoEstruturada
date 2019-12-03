/* 17) Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento de uma 
linha onde se encontra o maior elemento da matriz. Faça um algoritmo para gerar uma matriz quadrada 10 x 10 
com números aleatórios de 1 até 50 e imprimir o seu elemento minimax. 
Utilize um procedimento para a geração da matriz e uma função para retornar o elemento minimax. 
A impressão desse elemento tem que ser na função main. */

#include <stdio.h>
#include <time.h>
#define linha 10
#define coluna 10

void preenche(int matriz[][coluna]);
int calculo(int matriz[][coluna]);

int main(){
	int matriz[linha][coluna], elemento=0;
	
	preenche(matriz);
	elemento=calculo(matriz);
	printf("\n O elemento minimax e: %d", elemento);
	
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

int calculo(int matriz[][coluna]){
	int i, j, maior=0, minimo=50, posicaomaior;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if(maior<matriz[i][j]){
				maior=matriz[i][j];
				posicaomaior=i;
			}
		}
	}
	printf("\nLinha %d possui o maior elemento: %d", posicaomaior+1, maior);
	i=posicaomaior;
	for(j=0; j<coluna; j++){
		if(minimo>=matriz[i][j]){
			minimo=matriz[i][j];
		}
	}
	return minimo;
}
