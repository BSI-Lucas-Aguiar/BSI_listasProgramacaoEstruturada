/* 16) O hiperfatorial de um número inteiro n (n >= 1), representado por H(n), é definido pela seguinte expressão:
Faça um algoritmo que leia (na função main) um número inteiro n (n = 1) e calcule o hiperfatorial desse número.
Utilize uma função para calcular o hiperfatorial de n. A impressão do resultado tem que ser realizada na função main. */
#include <stdio.h>
#include <math.h>

int calculaHiperfatorial(int n){
	int i, hiper=1;
	for(i=1; i<=n; i++){
		hiper*=pow(i, i);
	}

	
	return hiper;
}

int main(){
	int n;

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<1);
	
	printf("\nO Hiperfatorial de %d e: %d", n, calculaHiperfatorial(n));
	
	return 0;
}
