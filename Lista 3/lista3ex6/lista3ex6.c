/* 6) Faça um algoritmo para ler 10 números inteiros a partir de um arquivo chamado "Numeros.txt"
e depois imprima-os na tela em ordem crescente. - Obs.: Para facilitar, leia os números do arquivo,
armazene-os em um vetor e depois ordene este vetor. Seu algoritmo deve ter um procedimento para ordenar
o vetor e outro para imprimir o vetor antes e depois da ordenação.  */

#include <stdio.h>
#define tam 10

void imprime(int vetor[]);
void ordena(FILE *arqNumeros);

void imprime(int vetor[]){
	int i;
	for(i=0; i<tam; i++){
		printf("%d ", vetor[i]);
	}
}

void ordena(FILE *arqNumeros){
	int vetor[tam], i=0, j=0, aux;
	while(!feof(arqNumeros)){
		fscanf(arqNumeros, "%d", &vetor[i]);
		i++;
	}
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(vetor[i]<vetor[j]){
				aux=vetor[j];
				vetor[j]=vetor[i];
				vetor[i]=aux;
			}
		}
	}
	fclose(arqNumeros);
	imprime(vetor);
}

int main(){
	FILE *arqNumeros;
	arqNumeros=fopen("Numeros.txt", "r");
	if(arqNumeros==NULL){
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	ordena(arqNumeros);
	return 0;
}
