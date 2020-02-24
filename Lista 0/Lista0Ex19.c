/* 19) Faça um programa que leia (na função main) um número inteiro n (n >= 1) e calcule S de acordo com a expressão abaixo:
S= 1/0!+ 2/1!+ 3/2!+ 4/3!+…+ n/(n-1)!
Utilize duas funções: uma para calcular o valor de S e retornar esse valor para a função main( ),
e outra para calcular o fatorial de um número e retornar esse valor para a primeira função (a que calcula o valor de S).
Imprima o resultado (valor de S) com 2 casas decimais na função main. */
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
