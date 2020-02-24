/* 19) Fa�a um programa que leia (na fun��o main) um n�mero inteiro n (n >= 1) e calcule S de acordo com a express�o abaixo:
S= 1/0!+ 2/1!+ 3/2!+ 4/3!+�+ n/(n-1)!
Utilize duas fun��es: uma para calcular o valor de S e retornar esse valor para a fun��o main( ),
e outra para calcular o fatorial de um n�mero e retornar esse valor para a primeira fun��o (a que calcula o valor de S).
Imprima o resultado (valor de S) com 2 casas decimais na fun��o main. */
#include <stdio.h>

int calculaFatorial(int n){
	int fatorial;
	for(fatorial=1; n>1; n=n-1){
    	fatorial= fatorial*n;
  	}

	return fatorial;
}

int calculaS(int n){
	int i;
	float s;
	for(i=1; i<=n; i++){
		s+=i/(calculaFatorial(i-1));
	}
	
	return s;
}

int main(){
	int n;

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<1);
	
	printf("\nS = %.2f", calculaS(n));
	
	return 0;
}
