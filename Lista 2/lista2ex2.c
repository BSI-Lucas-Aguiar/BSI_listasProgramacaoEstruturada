/* 2) Faça um algoritmo para ler pelo teclado uma matriz 3 x 5 com valores reais e
imprimir quantos valores maiores do que 20 ela possui. Utilize um procedimento para a
leitura da matriz e uma função para fazer o cálculo. A impressão da informação
(quantos valores maiores do que 20) deve ser na função main. */

#include <stdio.h>
#include <time.h>
#define linha 3
#define coluna 5

void preenche(float matriz[][coluna]);
int calculo(float matriz[][coluna]);

int main(){
	float matriz[linha][coluna];
	int total=0;
	preenche(matriz);
	total=calculo(matriz);
	printf("O vetor possui %d valores maiores que 20", total);
	return 0;
}

void preenche(float matriz[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("Informe o valor para a posicao %d %d:\n", i+1, j+1);
			scanf("%f", &matriz[i][j]);
		}
	}
}

int calculo(float matriz[][coluna]){
	int i, j, total;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if((matriz[i][j])>20){
				total++;
			}
		}
	}
	return total;
}


