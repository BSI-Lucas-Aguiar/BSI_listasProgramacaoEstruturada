/* 5) Fa�a um algoritmo para ler (pelo teclado) os 10 elementos de um vetor do tipo inteiro e verificar 
se os mesmos formam uma progress�o aritm�tica. Utilize um procedimento para preencher o vetor e uma fun��o 
para a verifica��o. A impress�o da informa��o (se os elementos do vetor formam ou n�o uma progress�o aritm�tica) 
deve ser na fun��o main. */

#include <stdio.h>
#define tam 10

void preenche(int vetor[]);
int verifica(int vetor[]);

int main(){
	int vetor[tam], progressao;
	preenche(vetor);
	progressao=verifica(vetor);
	if(progressao==0){
		printf("O vetor e uma progressao aritmetica");
		}else{
			printf("O vetor nao e uma progressao aritmetica");
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
	int i=0, progressao=0, valor;
	valor=vetor[i]-vetor[i+1];
	for(i=0; i<tam-1; i++){
		if((vetor[i]-vetor[i+1])!=valor){
			progressao=1;
		}else{
			progressao=0;
		}
	}
	return progressao;
}
