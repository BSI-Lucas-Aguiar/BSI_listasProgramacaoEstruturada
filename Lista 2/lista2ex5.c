/* 5) Faça um algoritmo para ler pelo teclado duas matrizes de reais 3 × 4 e imprimir a subtração dessas matrizes. 
A matriz que irá receber a subtração das outras duas deve ser criada na função main. Utilize três procedimentos: 
um para a leitura das matrizes, outro para calcular a subtração e um terceiro para imprimir a matriz com o resultado 
da subtração. */

#include <stdio.h>
#define linha 3
#define coluna 4

void preenche12(float matriz1[][coluna], float matriz2[][coluna]);
void preenche3(float matriz1[][coluna], float matriz2[][coluna], float matriz3[][coluna]);
void imprime3(float matriz3[][coluna]);

int main(){
	float matriz1[linha][coluna], matriz2[linha][coluna], matriz3[linha][coluna];
	
	preenche12(matriz1, matriz2);
	preenche3(matriz1, matriz2, matriz3);
	imprime3(matriz3);
	
	return 0;
}

void preenche12(float matriz1[][coluna], float matriz2[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("Informe o valor %d %d para a primeira matriz:\n", i+1, j+1);
			scanf("%f", &matriz1[i][j]);
		}
	}
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("Informe o valor %d %d para a segunda matriz:\n", i+1, j+1);
			scanf("%f", &matriz2[i][j]);
		}
	}
}

void preenche3(float matriz1[][coluna], float matriz2[][coluna], float matriz3[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz3[i][j]=(matriz1[i][j]-matriz2[i][j]);
		}
	}
}

void imprime3(float matriz3[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%.2f ", matriz3[i][j]);
		}
		printf("\n");
	}
}
