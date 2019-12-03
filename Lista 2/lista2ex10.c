/* 10) Fa�a um algoritmo que, dadas duas matrizes quadradas A e B de tamanho 6 x 6 geradas aleatoriamente com n�meros de 1 at� 10, 
verifique se B � a inversa de A, isto �, se B � igual a A-1 . Se B for a inversa, a multiplica��o de A por B resulta em uma matriz 
identidade. Utilize uma fun��o para verificar se a matriz resultante de A x B � uma matriz identidade e dois procedimentos: um para a 
gera��o das matrizes e outro para realizar a multiplica��o delas. De acordo com o retorno da fun��o deve-se imprimir na fun��o main: 
B E INVERSA DE A ou B NAO E INVERSA DE A. */

#include <stdio.h>
#include <time.h>
#define linha 6
#define coluna 6

void preenche(int matriza[][coluna], int matrizb[][coluna]);
void multiplica(int matriza[][coluna], int matrizb[][coluna], int matrizc[][coluna]);
int verifica(int matrizc[][coluna]);

int main(){
	int matriza[linha][coluna], matrizb[linha][coluna], matrizc[linha][coluna], resultado=0;
	preenche(matriza, matrizb);
	multiplica(matriza, matrizb, matrizc);
	resultado=verifica(matrizc);
	if(resultado==(linha*coluna)){
		printf("\nB e inversa de A");
	}else{printf("\nB nao e inversa de A");
	}
	
	return 0;
}

void preenche(int matriza[][coluna], int matrizb[][coluna]){
	int i, j;
	srand(time(NULL));
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matriza[i][j]=rand()%10+1;
		}
	}
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matrizb[i][j]=rand()%10+1;
		}
	}
	//Impressao A e B
	printf("A:\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matriza[i][j]);
		}
		printf("\n");
	}
	printf("\nB:\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matrizb[i][j]);
		}
		printf("\n");
	}
}

void multiplica(int matriza[][coluna], int matrizb[][coluna], int matrizc[][coluna]){
	int i, j, k, mult=0;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			matrizc[i][j]=0;
			for(k=0; k<linha; k++){
				mult+=matriza[i][k]*matrizb[k][j];
			}
			matrizc[i][j]=mult;
			mult=0;
		}
	}
	//Impressao matriz c
	printf("\nC:\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matrizc[i][j]);
		}
		printf("\n");
	}
}

int verifica(int matrizc[][coluna]){
	int i, j, resultado=0;
	//Verifica��o de Identidade
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if(i==j){
				if(matrizc[i][j]==1){
					resultado++;
				}
			}
			if(i!=j){
				if(matrizc[i][j]==0){
					resultado++;
				}
			}
		}
	}
	return resultado;
}
