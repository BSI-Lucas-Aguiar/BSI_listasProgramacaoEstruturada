/* 3) Considere um vetor com 40 números inteiros positivos gerados aleatoriamente de 1 a 100. 
Faça um algoritmo para verificar o número de vezes que um número inteiro positivo n lido pelo 
teclado aparece neste vetor. O programa também deve informar em quais posições (índices) do vetor 
o número aparece, caso ele pertença ao vetor. Utilize dois procedimentos: um para preencher o vetor 
e outro para realizar a verificação. Obs. 1: O seu programa deve verificar primeiro quantas vezes o 
número n aparece no vetor. Depois, se ele aparecer alguma vez no vetor, imprimir as posições que ele aparece. 
Se ele não pertencer ao vetor, seu programa deve imprimir: “Número não pertence ao vetor”.  */

#include <stdio.h>
#include<time.h>
#define tam 40

void gerador(int vetor[]);
void pesquisa(int vetor[], int numero);

int main(){
	int vetor[tam], numero=0;
	
	gerador(vetor);
	while(numero<=0){
	printf("\nInforme o numero a ser pesquisado:\n");
	scanf("%d", &numero);
	}
	pesquisa(vetor, numero);
	
	return 0;
}

void gerador(int vetor[]){
	int i;
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vetor[i]=rand()%100+1;
	}
	printf("O vetor e: \n");
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}

void pesquisa(int vetor[], int numero){
	int i, total=0;
	for(i=0; i<tam; i++){
		if(vetor[i]==numero){
			total++;
			printf("\nA posicao %d contem o valor pesquisado.", i);
		}
	}
	if(total>0){
		printf("\nO numero: %d, aparece %d vezes", numero, total);
	}else{
		printf("\nO numero %d nao aparece no vetor", numero);
	}
}
