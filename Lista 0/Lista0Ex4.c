/* 4) Considere uma sequ�ncia de n�meros inteiros, positivos e diferentes de zero fornecida pelo teclado.
Fa�a um algoritmo para calcular e imprimir (na fun��o main) a quantidade e a soma dos pares e a quantidade
e a soma dos �mpares. Defina o fim da sequ�ncia com um n�mero negativo ou igual a zero. Utilize uma fun��o
para informar se um n�mero � par ou �mpar. Se o n�mero for par, a fun��o deve retornar 1. Se o n�mero for �mpar,
a fun��o deve retornar 0. O retorno da fun��o tem que ser na fun��o main( ). */
#include <stdio.h>
#define tam 5

int verifica(int numero){
	if((numero%2)==0){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int vetor[tam], i, par=0, impar=0;
	
	for(i=0; i<tam; i++){
		printf("Informe o %d numero:\n", i+1);
		do{
			scanf("%d", &vetor[i]);
		}while(vetor[i]<=0);
		
		if(verifica(vetor[i])==1){
			par+=vetor[i];
		}else{
			impar+=vetor[i];
		}
	}
	
	printf("\nSoma dos Pares: %d\nSoma dos Impares: %d", par, impar);
	
	return 0;
}
