/* 4) Faça um algoritmo para ler (pelo teclado) os 25 elementos de um vetor do tipo inteiro e verificar 
se o mesmo está em ordem crescente. Utilize um procedimento para preencher o vetor e uma função para a 
verificação. A impressão da informação (se o vetor está ou não em ordem crescente) deve ser na função main. */

#include <stdio.h>
#define tam 25

void preenche(int vetor[]);
int verifica(int vetor[]);

int main(){
	int vetor[tam], crescente=0;
	preenche(vetor);
	crescente=verifica(vetor);
	if(crescente==0){
		printf("O vetor esta em ordem crescente");
		}else{
			printf("O vetor nao esta em ordem crescente");
	}
	return 0;
}

void preenche(int vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("Informe o %d valor:\n", i+1);
		scanf("%d", &vetor[i]);
	}
}

int verifica(int vetor[]){
	int i, crescente=0;
	for(i=0; i<tam-1; i++){
		if(vetor[i]>vetor[i+1]){
			crescente=1;
		}
	}
	return crescente;
}
