/* 4) Considere um arquivo chamado "Matriz4x4.txt" que armazena uma matriz quadrada de ordem 4 com números inteiros.
Faça um algoritmo para ler esta matriz do arquivo e criar outro arquivo chamado "Transposta.txt" que conterá a matriz
transposta da matriz lida. - Obs.: Utilize um procedimento para gerar a matriz transposta. */

#include <stdio.h>

void transpor(FILE *arqMatriz4x4, FILE *arqTransposta);

int main(){
	FILE *arqMatriz4x4, *arqTransposta;
	arqMatriz4x4 = fopen("Matriz4x4.txt", "r");
	if(arqMatriz4x4==NULL){
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	transpor(arqMatriz4x4, arqTransposta);
	return 0;
}

void transpor(FILE *arqMatriz4x4, FILE *arqTransposta){
	int i, j, aux, matriz[4][4];
	
	
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			fscanf(arqMatriz4x4, "%d", &matriz[i][j]);
		}
	}
	
	arqTransposta = fopen("Transposta.txt", "w");
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(i!=j){
				aux=matriz[i][j];
				matriz[i][j]=matriz[j][i];
				matriz[j][i]=aux;
			}
			fprintf(arqTransposta, "%d ", matriz[i][j]);
		}
		fprintf(arqTransposta, "\n");
	}
	fclose(arqMatriz4x4);
	fclose(arqTransposta);
	printf("Pronto.");
}
