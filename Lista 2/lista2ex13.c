/* 13) Faça um algoritmo para calcular a soma dos elementos que estão acima da diagonal principal de uma matriz 
quadrada 5 x 5 gerada aleatoriamente com números de 1 até 40. Utilize um procedimento para a geração da matriz 
e uma função para realizar a soma. O resultado da soma tem que ser impresso na função main. */

#include <stdio.h>
#include <time.h>
#define tam 5

void preenche(int matriz[][tam]);
int soma(int matriz[][tam]);

int main(){
	int matriz[tam][tam], resultado=0;
	
	preenche(matriz);
	resultado=soma(matriz);
	printf("\nTotal: %d", resultado);
	
	return 0;
}

void preenche(int matriz[][tam]){
	int i, j;
	srand(time(NULL));
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			matriz[i][j]=rand()%40+1;
		}
	}
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int soma(int matriz[][tam]){
	int i, j, resultado=0;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i<j){
				resultado+=matriz[i][j];
			}
		}
	}
	return resultado;
}
