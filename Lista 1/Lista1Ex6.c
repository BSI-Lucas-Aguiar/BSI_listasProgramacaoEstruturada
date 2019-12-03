/* 6) Faça um algoritmo para preencher um vetor (de tamanho 10) com elementos gerados aleatoriamente 
de 1 a 20, de maneira que não sejam inseridos números iguais no vetor, ou seja, todos os números contidos 
no vetor têm que ser distintos. Utilize dois procedimentos: um para preencher o vetor e outro para imprimi-lo. */

#include <stdio.h>
#include <time.h>
#define tam 10

void preenche(int vetor[]);
void imprime(int vetor[]);

int main(){
	int vetor[tam];
	preenche(vetor);
	imprime(vetor);

	return 0;
}

void preenche(int vetor[]){
	int i, j, verifica;
	srand(time(NULL));
	for(i=0; i<tam; i++){
    	do{
    	vetor[i]=rand()%20+1;
    	verifica=1;
    		for (j=0; (j<i) && (verifica==1); j++){
    			if(vetor[i] == vetor[j]){
    				verifica=0;
    			}
    		}
    	}while(verifica==0);  
    }
}

void imprime(int vetor[]){
	int i;
	printf("Vetor impresso:\n");
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}
