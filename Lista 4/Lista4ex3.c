/* 3) Considere uma struct que armazena as coordenadas x e y de um ponto no R2.
Faça um algoritmo que leia as coordenadas de dois pontos e imprima a distância entre eles.
Utilize um procedimento para ler as coordenadas dos pontos e uma função para retornar
(para a função main) a distância entre eles. */

#include <stdio.h>
#include <math.h>
#define TAM 2

struct dados{
	int x, y;
};

void leitura(struct dados pontos[]){
	int i;
	for(i=0; i<TAM; i++){
		printf("Informe o %d° x:\n", i+1);
		scanf("%d", &pontos[i].x);
		printf("Informe o %d° y:\n", i+1);
		scanf("%d", &pontos[i].y);
	}
	printf("\nPonto1:\n%d %d", pontos[0].x, pontos[0].y);
	printf("\nPonto2:\n%d %d", pontos[1].x, pontos[1].y);
}

int calculo(struct dados pontos[]){
	int distancia=0;
	distancia=sqrt( pow (pontos[1].x - pontos[0].x, 2) + pow (pontos[1].y - pontos[0].y, 2));
	
	return distancia;
}

int main(){
	int distancia=0;
	struct dados pontos[TAM];
	
	leitura(pontos);
	distancia=calculo(pontos);
	printf("\nA distancia entre os dois pontos e: %d", distancia);
	
	return 0;
}

