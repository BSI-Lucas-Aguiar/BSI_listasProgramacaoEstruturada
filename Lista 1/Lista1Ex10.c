/* 10) Faça um algoritmo para ler pelo teclado dois vetores A e B, cada um contendo 15 números inteiros, 
e em seguida preencher um vetor C, sendo que C[i] = 2*A[i] + B[i], onde 0 = i = 14. Utilize três procedimentos: 
um para ler os elementos dos vetores A e B, outro para preencher o vetor C e um terceiro para imprimir o vetor C a
pós o preenchimento. */

#include <stdio.h>
#define tam 15

void preencheab(int vetora[], int vetorb[]);
void preenchec(int vetora[], int vetorb[], int vetorc[]);
void imprimec(int vetorc[]);

int main(){
	int vetora[tam], vetorb[tam], vetorc[tam];
	
	preencheab(vetora, vetorb);
	preenchec(vetora, vetorb, vetorc);
	imprimec(vetorc);
	
	return 0;
}

void preencheab(int vetora[], int vetorb[]){
	int i;
	for(i=0; i<tam; i++){
		printf("VetorA %d posicao:\n", i+1);
		scanf("%d", &vetora[i]);
	}
	for(i=0; i<tam; i++){
		printf("VetorB %d posicao:\n", i+1);
		scanf("%d", &vetorb[i]);
	}
	printf("\nVetor A impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetora[i]);
	}
	printf("\nVetor B impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetorb[i]);
	}
}

void preenchec(int vetora[], int vetorb[], int vetorc[]){
	int i;
	for(i=0; i<tam; i++){
		vetorc[i]=((2*vetora[i])+(vetorb[i]));
	}
}
void imprimec(int vetorc[]){
	int i;
	printf("\nVetor C impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetorc[i]);
	}
}
