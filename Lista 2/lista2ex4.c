/* 4) Faça um algoritmo para ler pelo teclado duas matrizes de reais 5 × 3 e imprimir a
soma dessas matrizes. A matriz que irá receber a soma das outras duas deve ser criada
na função main. Utilize três procedimentos: um para a leitura das matrizes, outro para
calcular a soma e um terceiro para imprimir a matriz com o resultado da soma. */
#include <stdio.h>
#define linha 5
#define coluna 3

void leitura(float matriz[][coluna],float matriz2[][coluna]);
void calculo(float matriz[][coluna],float matriz2[][coluna],float matriz3[][coluna]);
void impressao(float matriz3[][coluna]);

int main(){
	float matriz[linha][coluna], matriz2[linha][coluna], matriz3[linha][coluna];
	leitura(matriz,matriz2);
	calculo(matriz,matriz2,matriz3);
	impressao(matriz3);
	
	return 0;
}

void leitura(float matriz[][coluna],float matriz2[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("Informe o valor %d %d do primeiro vetor\n", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("Informe o valor %d %d do segundo vetor\n", i+1, j+1);
			scanf("%f", &matriz2[i][j]);
		}
	}
}
void calculo(float matriz[][coluna],float matriz2[][coluna],float matriz3[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz3[i][j]=(matriz[i][j]+matriz2[i][j]);
		}
	}
}
void impressao(float matriz3[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%.2f ", matriz3[i][j]);
		}
		printf("\n");
	}
}
