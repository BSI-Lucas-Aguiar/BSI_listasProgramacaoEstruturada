/* 11) Considere um vetor A com 50 números inteiros positivos gerados aleatoriamente de 1 a 100. 
Faça um algoritmo para preencher outros dois vetores B e C, onde o vetor B deve conter apenas os números 
pares do vetor A e o vetor C deve conter apenas os números ímpares do vetor A. Utilize três procedimentos: 
um para preencher o vetor A, outro para preencher o vetor B e C, e um terceiro para imprimir os vetores B e 
C após o preenchimento.*/

#include <stdio.h>
#include <time.h>
#define tam 50

void preenchea(int vetora[]);
void preenchebc(int vetora[], int vetorb[], int vetorc[]);
void imprimebc(int vetorb[], int vetorc[]);

int main(){
	int vetora[tam], vetorb[tam], vetorc[tam];
	
	preenchea(vetora);
	preenchebc(vetora, vetorb, vetorc);
	imprimebc(vetorb, vetorc);
	
	return 0;
}

void preenchea(int vetora[]){
	int i;
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vetora[i]=rand()%100+1;
	}
	printf("\nVetor A impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetora[i]);
	}
}

void preenchebc(int vetora[], int vetorb[], int vetorc[]){
	int i;
	for(i=0; i<tam; i++){
		if((vetora[i]%2)==0){
			vetorb[i]=vetora[i];
		}else{vetorb[i]=0;
		}
	}
	for(i=0; i<tam; i++){
		if((vetora[i]%2)!=0){
			vetorc[i]=vetora[i];
		}else{vetorc[i]=0;
		}
	}
}
void imprimebc(int vetorb[], int vetorc[]){
	int i;
	printf("\nVetor B impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetorb[i]);
	}
	printf("\nVetor C impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetorc[i]);
	}
}
