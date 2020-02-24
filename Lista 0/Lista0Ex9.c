/* 9) Fa�a um algoritmo que leia (na fun��o main) 2 n�mero inteiros e positivos n (n >= 1) e m (m >= 1).
No final o algoritmo deve calcular e imprimir o valor de S de acordo com a express�o abaixo:
Utilize uma fun��o para calcular o valor de S. A impress�o do resultado (valor de S) tem que ser realizada na fun��o main. */
#include <stdio.h>

int calculaSomatorio(int n, int m){
	int i, j, soma=0;

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			soma+=(i*j);
		}
	}
	
	return soma;
}

int main(){
	int n, m;
	
	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<=0);
	
	do{
		printf("\nInforme o valor de M\n");
		scanf("%d", &m);
	}while(m<=0);
	
	printf("\nO resultado do somatorio e: %d", calculaSomatorio(n, m));
	
	return 0;
}
