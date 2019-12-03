/* 12) Faça um algoritmo para gerar e imprimir uma matriz quadrada A de tamanho 10 x 10, onde seus elementos são: 
2.i + 7.j + 2, se i < j; 
3.i^2 – 1, se i = j ;
4.i^3 – 5.j^2 + 1, se i > j;
Utilize dois procedimentos: um para gerar a matriz e outro para imprimir a matriz. */

#include <stdio.h>
#include <math.h>
#define linha 10
#define coluna 10

void preenche(int matriz[][coluna]);
void imprime(int matriz[][coluna]);

int main(){
	int matriz[linha][coluna];
	
	preenche(matriz);
	imprime(matriz);
	
	return 0;
}

void preenche(int matriz[][coluna]){
	int i, j;
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			if(i<j){
				matriz[i][j]=((2*i)+(7*j)+2);
			}
			if(i==j){
				matriz[i][j]=(3*(pow(i, 2))-1);
			}
			if(i>j){
				matriz[i][j]=((4*pow(i, 3))-(5*pow(j, 2))+1);
			}
		}
	}
}

void imprime(int matriz[][coluna]){
	int i, j;
	printf("Matriz impressa:\n");
	for(i=0; i<linha; i++){
		for(j=0; j<coluna; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

