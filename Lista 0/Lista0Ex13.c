/* 13) Fa�a um algoritmo que leia (na fun��o main) um n�mero n (n >= 1),
calcule e imprima o valor de P de acordo com a express�o abaixo: P=1-2+3-4+5-��(2n-1)
Utilize uma fun��o para calcular o valor de P. A impress�o do resultado (valor  de P)
tem que ser realizada na fun��o main. */
#include <stdio.h>

int calcula(int n){
	int i, valor=0;
	for(i=0; i<n; i++){
		valor+=(2*n)-1;
	}
	
	return valor;
}

int main(){
	int n;

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<1);
	
	printf("\nO valor P e: %d", calcula(n));
	
	return 0;
}
