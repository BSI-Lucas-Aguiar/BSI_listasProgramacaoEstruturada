/* 9) Considere um vetor com 20 números inteiros positivos gerados aleatoriamente de 0 a 49. 
Faça um algoritmo que imprima na tela a quantidade de números pares e de números ímpares presentes no vetor. 
Utilize dois procedimentos: um para preencher o vetor e outro para imprimir as informações. */ 

#include <stdio.h>
#include <time.h>
#define tam 20

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
	srand(time(NULL));
	for(i=0; i<tam; i++){
		vetor[i]=rand()%49;
	}
}

void imprime(int vetor[]){
	int i, par=0, impar=0;
	
	printf("Vetor impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
	
	for(i=0; i<tam; i++){
		if((vetor[i]%2)==0){
			par++;
		}else{
			impar++;
		}
	}
	printf("\nO vetor possui %d numeros pares", par);
	printf("\nO vetor possui %d numeros impares", impar);
}
