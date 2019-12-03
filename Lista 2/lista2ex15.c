/* 15) Faça um algoritmo para calcular a soma dos elementos que estão em uma coluna x de uma matriz 10 x 4 
gerada aleatoriamente com números de 1 até 15. A coluna a ser somada (coluna x) deve ser lida pelo teclado na função main. 
Utilize um procedimento para a geração da matriz e uma função para realizar a soma. O resultado da soma tem que ser impresso na função main. */

#include <stdio.h>
#include <time.h>
#define linha 10
#define coluna 4

int soma(int matriz[][coluna], int valor);
void preenche(int matriz[][coluna]);

int main(){
	int matriz[linha][coluna], total=0, valor=4;
	
	preenche(matriz);
	while((valor>=4)!=(valor<0)){
		printf("Informe a coluna a ser somada:\n");
		scanf("%d", &valor);
	}
	total=soma(matriz, valor);
	printf("\nA soma da coluna %d e: %d", valor, total);
	return 0;
}

void preenche(int matriz[][coluna]){
	int i, j;
	srand(time(NULL));
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz[i][j]=rand()%15+1;
		}
	}
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int soma(int matriz[][coluna], int valor){
	int i, j, total=1;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if(j==valor){
				total=total*matriz[i][j];
			}
		}
	}
	return total;
}
