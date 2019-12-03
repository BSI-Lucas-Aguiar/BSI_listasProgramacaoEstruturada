/* 1) Faça um algoritmo para ler pelo teclado uma matriz 4 x 3 com valores reais e
imprimir o maior elemento da matriz e a sua localização (linha e coluna). Utilize dois
procedimentos: um para a leitura da matriz e outro para imprimir as informações. */
#include <stdio.h>
#define linha 4
#define coluna 3

void leitura(float matriz[][coluna]);
void impressao(float matriz[][coluna]);

int main(){
	float matriz[linha][coluna];
	leitura(matriz);
	impressao(matriz);
	
	return 0;
}

void leitura(float matriz[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("Informe o valor para a posicao %d %d:\n", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
}
void impressao(float matriz[][coluna]){
	int i, j, pi=0, pj=0;
	float maior=matriz[0][0];
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%.2f ", matriz[i][j]);
			if(maior<=matriz[i][j]){
				maior=matriz[i][j];
				pi=i;
				pj=j;
			}
		}
		printf("\n");
	}
	printf("\nO maior valor e: %.2f na posicao %d %d", maior, pi+1, pj+1);
}
