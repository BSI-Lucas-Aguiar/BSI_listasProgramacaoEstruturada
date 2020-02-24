/* 18) Faça um programa que leia (na função main) um número inteiro n (n >= 1)
e calcule M de acordo com a expressão abaixo:
M=-1/n+2/(n-1)-3/(n-2)+4/(n-3)-…±n/1
Utilize uma função para calcular o valor de M. A impressão do resultado (valor de M) tem que ser realizada na função main. */
#include <stdio.h>

int calculaM(int n){
	int m=0, i;
	for(i=0; i<n; i++){
		m+=(i-1)/n;
	}
	
	return m;
}

int main(){
	int n;

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<1);
	
	printf("M = %d", calculaM(n));
	
	
	return 0;
}
