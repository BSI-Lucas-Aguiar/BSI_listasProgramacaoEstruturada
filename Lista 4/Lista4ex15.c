/* 15) Considere uma struct que armazena o primeiro nome, a idade, o sal�rio e o cargo de 10 funcion�rios de
uma empresa. Fa�a um algoritmo que imprima os funcion�rios em ordem n�o-decrescente pela idade utilizando o
algoritmo SelectionSort. Utilize tr�s procedimentos: um para preencher os dados dos funcion�rios, outro para
realizar a ordena��o e um terceiro para imprimir os dados depois da ordena��o. */

#include <stdio.h>
#define tam 10

struct dados{
	char nome[10];
	int idade;
	float salario;
};

void preenche(struct dados funcionarios[]);
void ordenar(struct dados funcionarios[]);
void imprime(struct dados funcionarios[]);

int main(){
	struct dados funcionarios[tam];
	preenche(funcionarios);
	ordenar(funcionarios);
	imprime(funcionarios);
	
	return 0;
}

void preenche(struct dados funcionarios[]){
	
	
}

void ordenar(struct dados funcionarios[]){
	
	
}

void imprime(struct dados funcionarios[]){
	
	
}
