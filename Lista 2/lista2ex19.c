/* 19) Considere uma matriz quadrada de ordem 6 gerada aleatoriamente com n�meros de 1 at� 30. 
Fa�a um algoritmo que calcule e imprima a soma dos elementos dessa matriz que n�o perten�am � diagonal principal 
nem � diagonal secund�ria. Utilize um procedimento para a gera��o da matriz e uma fun��o para retornar a soma. 
A impress�o da soma tem que ser na fun��o main. */

#include <stdio.h>
#include <time.h>
#define tam 6

void preenche(int matriz[][tam]);
int calculo(int matriz[][tam]);

int main(){
	int matriz[tam][tam], total=0;
	
	preenche(matriz);
	total=calculo(matriz);
	printf("\nO resultado e: %d", total);
	
	return 0;
}

void preenche(int matriz[][tam]){
	int i, j;
	srand(time(NULL));
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			matriz[i][j]=rand()%30+1;
		}
	}
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
}

int calculo(int matriz[][tam]){
	int i, j, total=0;
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if((i==j)!=(i+j==tam-1)){
				//N�o faz nada .-.
			}else{total=total+matriz[i][j];
			}
		}
	}
	return total;
}
