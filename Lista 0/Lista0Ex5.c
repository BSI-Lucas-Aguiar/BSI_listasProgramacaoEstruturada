/* 5) Fa�a um algoritmo que leia (na fun��o main) um n�mero n e divida-o por 2 sucessivamente at�
que o resultado seja menor que 1. Imprima o resultado (tamb�m na fun��o main) da �ltima divis�o efetuada.
Utilize uma fun��o para retornar o resultado da divis�o de um n�mero por 2.  */
#include <stdio.h>

int main(){
	float n;
	
	printf("Informe um numero:\n");
	scanf("%f", &n);
	
	do{
		n=(n/2);
	}while(n>=1);
	
	printf("\nValor restante %.2f", n);
	
	return 0;
}
