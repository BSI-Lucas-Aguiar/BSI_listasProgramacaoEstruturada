/* 10) Faça um algoritmo que leia (na função main) um número inteiro n (n >= 1) e
imprima uma sequência de acordo com a seguinte lei de formação:
i + 1, se i for par
i – 1, se i for ímpar
onde:   1 <= i <= n
Utilize um procedimento para imprimir a sequência de acordo com a lei de formação. */
#include <stdio.h>

void imprimirSequencia(int n){
	int i;
	for(i=1; i<=n; i++){
		if((i%2)==0){
			printf("\nPar: %d", i+1);
		}
		if((i%2)!=0){
			printf("\nImpar: %d", i-1);
		}
	}
}

int main(){
	int n;

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<=0);
	
	imprimirSequencia(n);
	
	return 0;
}
