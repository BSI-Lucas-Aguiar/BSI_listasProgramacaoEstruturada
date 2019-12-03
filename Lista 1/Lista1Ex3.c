/* 3) Considere um vetor com 40 n�meros inteiros positivos gerados aleatoriamente de 1 a 100. 
Fa�a um algoritmo para verificar o n�mero de vezes que um n�mero inteiro positivo n lido pelo 
teclado aparece neste vetor. O programa tamb�m deve informar em quais posi��es (�ndices) do vetor 
o n�mero aparece, caso ele perten�a ao vetor. Utilize dois procedimentos: um para preencher o vetor 
e outro para realizar a verifica��o. Obs. 1: O seu programa deve verificar primeiro quantas vezes o 
n�mero n aparece no vetor. Depois, se ele aparecer alguma vez no vetor, imprimir as posi��es que ele aparece. 
Se ele n�o pertencer ao vetor, seu programa deve imprimir: �N�mero n�o pertence ao vetor�.  */

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
