/* 1) Faça um algoritmo para verificar se um número real lido pelo teclado encontra-se ou não em um vetor com 30 números reais 
(também lido pelo teclado). Utilize um procedimento para preencher o vetor e uma função para verificar se o número pertence ou não ao vetor. 
A impressão desta informação (se o número pertence ou não ao vetor) deve ser na função main. */

#include <stdio.h>
#define tam 30

void preenche(float vetor[]);
float verifica(float vetor[], float numero);

int main(){
	float vetor[tam], numero, resultado=0;
	preenche(vetor);
	printf("\nInforme o valor a ser pesquisado:\n");
	scanf("%f", &numero);
	resultado=verifica(vetor, numero);
	if(resultado==1){
		printf("O numero %.2f pertence ao vetor.", numero);
	}else{
		printf("O numero %.2f nao pertence ao vetor.", numero);
	}
	return 0;	
}

void preenche(float vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("Informe o %i valor do vetor:\n", i+1);
		scanf("%f", &vetor[i]);
	}
	
}

float verifica(float vetor[], float numero){
	int i, resultado=0;
	for(i=0; i<tam; i++){
		if(vetor[i]==numero){
			resultado=1;
		}
	}
	return resultado;
}
