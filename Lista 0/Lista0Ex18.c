/* 18) Fa�a um programa que leia (na fun��o main) um n�mero inteiro n (n >= 1)
e calcule M de acordo com a express�o abaixo:
M=-1/n+2/(n-1)-3/(n-2)+4/(n-3)-��n/1
Utilize uma fun��o para calcular o valor de M. A impress�o do resultado (valor de M) tem que ser realizada na fun��o main. */
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
