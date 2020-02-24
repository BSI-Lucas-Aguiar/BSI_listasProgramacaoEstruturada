/* 11) Faça um algoritmo que leia (na função main) um número inteiro e positivo n (n > 1)
e verifique se este número é primo. Utilize uma função para fazer a verificação. A impressão
da mensagem (se o número é primo ou não) deve ser na função main.
Obs.: Um número é chamado de primo se tem somente o número 1 e ele mesmo como divisores. */
#include <stdio.h>

int primo(int n){
	int primo=0, i;
	for(i=1; i<=n; i++){
		if((n%i)==0){
			primo++;
		}
	}
	if(primo==2){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	int n;

	do{
		printf("\nInforme o valor de N\n");
		scanf("%d", &n);
	}while(n<=1);
	
	if(primo(n)==1){
		printf("\n%d E primo!", n);
	}else{
		printf("\n%d NAO e primo!", n);
	}
	
	return 0;
}
