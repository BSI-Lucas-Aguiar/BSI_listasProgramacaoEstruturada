/* 5) Faça um algoritmo para ler (pelo teclado) os 10 elementos de um vetor do tipo inteiro e verificar 
se os mesmos formam uma progressão aritmética. Utilize um procedimento para preencher o vetor e uma função 
para a verificação. A impressão da informação (se os elementos do vetor formam ou não uma progressão aritmética) 
deve ser na função main. */

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
