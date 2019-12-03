/* 9) Faça um algoritmo para verificar se uma dada matriz quadrada 10 x 10 gerada aleatoriamente com números de 0 até 19 é 
uma matriz identidade. Em uma matriz identidade, todos os elementos da diagonal principal são iguais a 1 e os demais são iguais a 0. 
Utilize um procedimento para a geração da matriz e uma função para a verificação. De acordo com o retorno da função deve-se imprimir 
na função main: MATRIZ IDENTIDADE ou MATRIZ NÃO E IDENTIDADE. */

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
