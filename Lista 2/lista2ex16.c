/* 16) Faça um algoritmo que leia uma matriz de ordem 4 com valores reais e imprima a soma dos valores contidos em sua diagonal 
secundária. Utilize um procedimento para ler a matriz e uma função para realizar a soma. 
O resultado da soma tem que ser impresso na função main. */

#include <stdio.h>
#define tam 4

float soma(float matriz[][tam]);
void preenche(float matriz[][tam]);

int main(){
	float matriz[tam][tam], total=0;
	
	preenche(matriz);
	total=soma(matriz);
	printf("\nSoma: %.2f", total);
	
	return 0;
}

void preenche(float matriz[][tam]){
	int i, j;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("\nInforme o valor %d %d da matriz:\n", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%.2f ", matriz[i][j]);
		}
		printf("\n");
	}
}

float soma(float matriz[][tam]){
	int i, j, total=1;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if((i+j)==(tam-1)){
				total=total*matriz[i][j];
			}
		}
	}
	return total;
}
