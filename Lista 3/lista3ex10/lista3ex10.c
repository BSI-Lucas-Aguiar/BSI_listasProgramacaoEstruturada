/* 10) Considere um arquivo chamado "Matriz4x5.txt" que armazena uma matriz de tamanho 4 x 5 de n�meros inteiros.
Fa�a um algoritmo para ler essa matriz do arquivo, trocar a primeira linha com a quarta e imprimir a nova matriz
no arquivo chamado "MatrizAlterada.txt". A matriz que receber� os valores lidos do arquivo deve ser criada na
fun��o main( ) e n�o deve ser utilizada uma matriz auxiliar para realizar a troca das linhas.
Utilize tr�s procedimentos: um para ler a matriz do arquivo de entrada, outro para realizar a troca das linhas
e um terceiro para imprimir no arquivo de sa�da a matriz alterada. */

#include <stdio.h>
void imprime(int matriz[][5], FILE *arqMatrizAlterada);
void troca(int matriz[][5]);
void leitura(FILE *arqMatriz, int matriz[][5]);

int main(){
	int matriz[4][5];
	FILE *arqMatriz, *arqMatrizAlterada;
	arqMatriz=fopen("Matriz4x5.txt", "r");
	if(arqMatriz==NULL){
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	leitura(arqMatriz, matriz);
	troca(matriz);
	imprime(matriz, arqMatrizAlterada);
	return 0;
}

void imprime(int matriz[][5], FILE *arqMatrizAlterada){
	arqMatrizAlterada=fopen("MatrizAlterada.txt","w");
	int i, j;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			fprintf(arqMatrizAlterada, "%d ", matriz[i][j]);
		}
		fprintf(arqMatrizAlterada, "\n");
	}
	fclose(arqMatrizAlterada);
}

void troca(int matriz[][5]){
	int i,j,aux;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			if(i==0){
			aux=matriz[i][j];
			matriz[i][j]=matriz[i+3][j];
			matriz[i+3][j]=aux;
			}
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

void leitura(FILE *arqMatriz, int matriz[][5]){
	int i, j;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			fscanf(arqMatriz, "%d", &matriz[i][j]);
		}
	}
	fclose(arqMatriz);
}

