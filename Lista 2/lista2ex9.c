/* 9) Fa�a um algoritmo para verificar se uma dada matriz quadrada 10 x 10 gerada aleatoriamente com n�meros de 0 at� 19 � 
uma matriz identidade. Em uma matriz identidade, todos os elementos da diagonal principal s�o iguais a 1 e os demais s�o iguais a 0. 
Utilize um procedimento para a gera��o da matriz e uma fun��o para a verifica��o. De acordo com o retorno da fun��o deve-se imprimir 
na fun��o main: MATRIZ IDENTIDADE ou MATRIZ N�O E IDENTIDADE. */

#include <stdio.h>
#include <time.h>
#define linha 10
#define coluna 10

void preenche(int matriz[][coluna]);
int verifica(int matriz[][coluna]);

int main(){
	int matriz[linha][coluna], resultado=0;
	
	preenche(matriz);
	resultado=verifica(matriz);
	if(resultado==(linha*coluna)){
		printf("\nA matriz e identidade");
	}else{printf("\nA matriz nao e identidade");
	}
	
	return 0;
}

void preenche(int matriz[][coluna]){
	int i, j;
	srand(time(NULL));
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriz[i][j]=rand()%19;
		}
	}
	
	printf("Matriz impressa:\n");
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
			if(i==j){
				if(matriz[i][j]==1){
					resultado++;
				}
			}
			if(i!=j){
				if(matriz[i][j]==0){
					resultado++;
				}
			}
		}
	}
	return resultado;
}
