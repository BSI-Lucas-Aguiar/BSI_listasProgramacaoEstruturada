/* 17) Fa�a um algoritmo que leia (na fun��o main) um n�mero inteiro n (n = 1)
e calcule o valor de S de acordo com a seguinte s�rie:
S=2/4+5/5+10/6+17/7+�+n^2+1/n+3
Utilize uma fun��o para calcular o valor de S. A impress�o do resultado (valor de S) tem que ser realizada na fun��o main. */
#include <stdio.h>

float calculaSomatorio(int n){
	int i;
	float soma=0;
	
	for(i=0; i<n; i++){
		soma+=((n*n)+1)/(n+3);
	}
	
	return soma;
}

int main(){
	int n;

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<1);
	
	printf("\nS = %.2f", calculaSomatorio(n));
	
	return 0;
}
