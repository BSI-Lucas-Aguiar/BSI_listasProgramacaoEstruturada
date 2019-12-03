/* 14) Faça um algoritmo para calcular a multiplicação dos elementos que estão abaixo da diagonal principal de 
uma matriz quadrada 6 x 6 gerada aleatoriamente com números de 1 até 10. Utilize um procedimento para a geração 
da matriz e uma função para realizar a multiplicação. O resultado da multiplicação tem que ser impresso na função main. */

#include <stdio.h>
#include <time.h>
#define tam 4

void preenche(int matriz[][tam]);
int multiplica(int matriz[][tam]);

int main(){
	int matriz[tam][tam], resultado=0;
	
	preenche(matriz);
	resultado=multiplica(matriz);
	printf("\nTotal: %d", resultado);
	
	return 0;
}

void preenche(int matriz[][tam]){
	int i, j;
	srand(time(NULL));
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			matriz[i][j]=rand()%10+1;
		}
	}
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int multiplica(int matriz[][tam]){
	int i, j, resultado=1;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i>j){
				resultado=resultado*matriz[i][j];
			}
		}
	}
	return resultado;
}

