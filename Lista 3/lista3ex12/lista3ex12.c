/* 12) Considere um arquivo chamado "Matriz5x6.txt" que armazena uma matriz de tamanho 5 x 6 de números inteiros.
Faça um algoritmo para ler essa matriz do arquivo, realizar a soma dos elementos da segunda, quarta e sexta colunas
e imprimir o resultado da soma no arquivo chamado "Soma.txt". A matriz que receberá os valores lidos do arquivo deve
ser criada na função main( ). Utilize uma função para realizar o cálculo da soma (retornando esse valor para a
função main( )) e dois procedimentos: um para ler a matriz do arquivo de entrada e outro para imprimir no arquivo
de saída o resultado da soma. */

#include <stdio.h>

void impressao(int total, FILE *arqSoma);
int soma(int matriz[][6]);
void leitura(FILE *arqMatriz, int matriz[][6]);

int main(){
	FILE *arqMatriz, *arqSoma;
	int total, matriz[5][6];
	arqMatriz=fopen("matriz5x6.txt", "r");
	if(arqMatriz==NULL){
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	leitura(arqMatriz, matriz);
	total=soma(matriz);
	impressao(total, arqSoma);
	return 0;
}

void leitura(FILE *arqMatriz, int matriz[][6]){
	int i, j;
	for(i=0; i<5; i++){
		for(j=0; j<6; j++){
			fscanf(arqMatriz, "%d", &matriz[i][j]);
		}
	}
	fclose(arqMatriz);
}

int soma(int matriz[][6]){
	int total=0, i, j;
	for(i=0; i<5; i++){
		for(j=0; j<6; j++){
			if((j==1)||(j==3)||(j==5)){
				total+=matriz[i][j];
			}
		}
	}
	return total;
}

void impressao(int total, FILE *arqSoma){
	arqSoma=fopen("Soma.txt", "w");
	fprintf(arqSoma, "A soma dos elementos das colunas 2, 4 e 6 e: %d", total);
	fclose(arqSoma);
	printf("Arquivo Salvo.");
}
