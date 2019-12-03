/* 2) Considerando a struct do exerc�cio anterior, fa�a um algoritmo que preencha os dados
da conta banc�ria de 20 clientes e depois imprima quantos deles t�m saldo banc�rio de no m�ximo
3 sal�rios m�nimos, onde o sal�rio m�nimo � igual a R$ 880,00. Utilize um procedimento para preencher
os dados dos clientes e uma fun��o para retornar (para a fun��o main) a quantidade de clientes. */

#include <stdio.h>
#define TAM 20

struct dados{
	int numero;
	char nome[10];
	float saldo;
};

void preenche(struct dados clientes[]);
int calculo(struct dados clientes[]);

int main(){
	int total=0;
	struct dados clientes[TAM];
	preenche(clientes);
	total=calculo(clientes);
	printf("\n%d Clientes tem menos de 3 salarios minimos em conta.", total);
	
	return 0;
}

void preenche(struct dados clientes[]){
	int i;
	for(i=0; i<TAM; i++){
		printf("\nInforme o numero do %d conta:\n", i+1);
		scanf("%d", &clientes[i].numero);
		printf("\nInforme o nome do %d conta:\n", i+1);
		scanf("%s", clientes[i].nome);
		printf("\nInforme o saldo do %d conta:\n", i+1);
		scanf("%f", &clientes[i].saldo);
	}
}

int calculo(struct dados clientes[]){
	int total=0, i;
	
	for(i=0; i<TAM; i++){
		if(clientes[i].saldo<=880*3){
			total++;
		}
	}
	return total;
}
