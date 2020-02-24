/* 6) Faça um algoritmo que leia (na função main) 2 números inteiros a e n (n >= 1) e calcule S
de acordo com a expressão abaixo. Imprima o resultado com 3 casas decimais.
Utilize uma função para calcular o valor de S. A impressão do resultado (valor de S)
tem que ser realizada na função main. */
#include <stdio.h>
#include <math.h>

float calculaSomatorio(int a, int n){
	int i;
	float soma;
	for(i=0; i<n; i++){
		soma=i/(pow(a, i));
	}
	return soma;
}


int main(){
	int a, n;
	
	printf("Informe o valor de A:\n");
	scanf("%d", &a);
	
	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<=0);
	
	printf("\nResultado %.3f", calculaSomatorio(a, n));
	
	return 0;
}
