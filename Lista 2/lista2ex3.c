/* 3) Faça um algoritmo para ler pelo teclado uma matriz 4 x 4 com valores inteiros e
também um número inteiro x. Ao final, o algoritmo tem que imprimir se o número x
pertence ou não à matriz. O número x tem que ser lido na função main. Utilize um
procedimento para a leitura da matriz e uma função para realizar a busca. A impressão
da informação (se x está presente ou não na matriz) deve ser na função main. */

#include <stdio.h>
#define linha 4
#define coluna 4

int verifica(float matriz[][coluna], float valor);
void leitura(float matriz[][coluna]);

int main(){
	float valor=0, matriz[linha][coluna];
	int resultado=0;
	leitura(matriz);
	printf("\nInforme o valor a ser pesquisado:\n");
	scanf("%f", &valor);
	resultado=verifica(matriz, valor);
	if(resultado==1){
		printf("\nO valor %.2f esta presente na matriz.", valor);
	}else{printf("\nO valor %.2f nao esta presente na matriz.", valor);
	}
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

int verifica(float matriz[][coluna], float valor){
	int i, j, resultado=0;
	for(i=0; i<linha; i++){
		for(j=0; j<linha; j++){
			if(matriz[i][j]==valor){
				resultado=1;
			}
		}
	}
	return resultado;
}
