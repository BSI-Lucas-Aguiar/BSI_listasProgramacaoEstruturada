/* 8) Fa�a um algoritmo que leia (na fun��o main) dois n�meros inteiros b e n (n >= 1).
O algoritmo deve calcular e imprimir (com 3 casas decimais) o valor de P, que � dado de
acordo com a express�o abaixo: P = (1 + b).(2 - b).(3 + b).(4 - b)...(n � b) Utilize uma
fun��o para calcular o valor de P. A impress�o do resultado (valor  de P) tem que ser realizada na fun��o main. */
#include <stdio.h>
int calcularP(int b, int n){
	int i, soma=1;
	for(i=1; i<=n; i++){
		if((i%2)!=0){
			soma*=(i+b);
		}
		if((i%2)==0){
			soma*=(i-b);
		}
	}
	return soma;
}

int main(){
	int b, n;

	printf("Informe o valor de B:\n");
	scanf("%d", &b);

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<=0);
	
	printf("\nO Valor de P e: %d", calcularP(b, n));
	
	return 0;
}
