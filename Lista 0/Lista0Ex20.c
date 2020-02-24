/* 20) Fa�a um programa que leia (na fun��o main) um n�mero inteiro n (n >= 1) e imprima (utilizando um procedimento) a seguinte sequ�ncia:
1
1 2
1 2 3

1 2 3 � n */
#include <stdio.h>

void imprimeEscada(int n){
	int i, j;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}

int main(){
	int n;

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<1);
	
	imprimeEscada(n);

	return 0;
}
