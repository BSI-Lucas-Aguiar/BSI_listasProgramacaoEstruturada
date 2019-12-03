/* 9) Faça um algoritmo para gerar uma matriz 10 x 10 aleatoriamente com números de 0 até 39,
com exceção dos elementos da diagonal principal, que devem ser gerados aleatoriamente com números de 1 até 50.
A matriz gerada deve ser armazenada no arquivo "Matriz10x10.txt". */

#include <stdio.h>
#include <time.h>
#define tam 10
int main(){
	int matriz[tam][tam], i, j;
	srand(time(NULL));
	FILE *arqMatriz10x10;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i!=j){
				matriz[i][j]=rand()%39;
			}else{
				matriz[i][j]=rand()%50+1;
			}
		}
	}
	//Matriz Impressa
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	arqMatriz10x10=fopen("Matriz10x10.txt","w");
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			fprintf(arqMatriz10x10, "%d ", matriz[i][j]);
		}
		fprintf(arqMatriz10x10, "\n");
	}
	printf("Arquivo Salvo.");
	fclose(arqMatriz10x10);
	return 0;
}
