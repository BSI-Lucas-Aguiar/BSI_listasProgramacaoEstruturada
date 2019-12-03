/* 8) Fa�a um algoritmo que leia pelo teclado os 15 n�meros de um vetor do tipo inteiro e 
imprima na tela o menor elemento desse vetor e a posi��o em que ele se encontra. Utilize dois procedimentos: 
um para preencher o vetor e outro para imprimir as informa��es. Obs.: Caso o menor elemento apare�a mais de 
uma vez no vetor, a posi��o a ser impressa � a do �ltimo menor elemento. */

#include <stdio.h>
#define tam 15

void preenche(int vetor[]);
void imprime(int vetor[]);

int main(){
	int vetor[tam];
	
	preenche(vetor);
	imprime(vetor);
	
	return 0;
}

void preenche(int vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("Informe o %d valor:\n", i+1);
		scanf("%d", &vetor[i]);
	}
}

void imprime(int vetor[]){
	int i, menor=vetor[0], posicao=0;
	for(i=0; i<tam; i++){
		if(menor>=vetor[i]){
			menor=vetor[i];
			posicao=i;
		}
	}
	printf("Vetor impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
	printf("\nMenor valor: \n%d\n Na posicao: \n%d ", menor, posicao+1);
}
