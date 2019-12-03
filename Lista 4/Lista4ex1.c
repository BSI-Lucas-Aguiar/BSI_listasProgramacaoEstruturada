/* 1) Considere uma struct que armazena os seguintes dados de uma conta bancária: número da conta,
o primeiro nome do cliente e saldo. Faça um algoritmo que preencha os dados da conta bancária de 20
clientes e depois imprima quantos deles têm saldo bancário maior do que R$ 1.000,00. */
#include <stdio.h>
#include <string.h>
#define TAM 20

struct dados{
	int numero;
	char nome[10];
	float saldo;
};

int main(){
	int i, cont=0;
	struct dados clientes[TAM];
	for(i=0; i<TAM; i++){
		printf("\nInforme o numero do %d conta:\n", i+1);
		scanf("%d", &clientes[i].numero);
		printf("\nInforme o nome do %d conta:\n", i+1);
		scanf("%s", clientes[i].nome);
		printf("\nInforme o saldo do %d conta:\n", i+1);
		scanf("%f", &clientes[i].saldo);
	}
	
	for(i=0; i<TAM; i++){
		if(clientes[i].saldo>=1000){
			cont++;
		}
	}
	printf("\n%d contas tem mais de R$1.000.", cont);
	
	return 0;
}
