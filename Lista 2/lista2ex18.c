/* 18) Faça um algoritmo que leia uma matriz 3 x 3 de números inteiros. 
Depois, calcule e armazene na posição i de um vetor de tamanho 3 a soma dos valores da coluna i da matriz (0 = i = 2), 
imprimindo em seguida o vetor. Utilize dois procedimentos: um para ler a matriz e outro para preencher e imprimir o vetor. 
O vetor também deve ser declarado na função main.  */

#include <stdio.h>
#define tam 3

void leitura(int matriz[][tam]);
void preenche(int matriz[][tam], int vetor[]);

int main(){
	int matriz[tam][tam], vetor[tam]={(0,0,0)};
	
	leitura(matriz);
	preenche(matriz, vetor);
	
	return 0;
}

void leitura(int matriz[][tam]){
	int i, j;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("Informe o valor %d %d da matriz:\n", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}
void preenche(int matriz[][tam], int vetor[]){
	int i, j;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			vetor[j]+=matriz[i][j];
		}
	}
	printf("\nVetor com soma impressa:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}
