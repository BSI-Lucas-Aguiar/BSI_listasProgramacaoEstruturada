/* 11) Fa�a um algoritmo que leia (na fun��o main) um n�mero inteiro e positivo n (n > 1)
e verifique se este n�mero � primo. Utilize uma fun��o para fazer a verifica��o. A impress�o
da mensagem (se o n�mero � primo ou n�o) deve ser na fun��o main.
Obs.: Um n�mero � chamado de primo se tem somente o n�mero 1 e ele mesmo como divisores. */
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
