/* 16) O hiperfatorial de um n�mero inteiro n (n >= 1), representado por H(n), � definido pela seguinte express�o:
Fa�a um algoritmo que leia (na fun��o main) um n�mero inteiro n (n = 1) e calcule o hiperfatorial desse n�mero.
Utilize uma fun��o para calcular o hiperfatorial de n. A impress�o do resultado tem que ser realizada na fun��o main. */
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
