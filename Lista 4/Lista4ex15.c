/* 15) Considere uma struct que armazena o primeiro nome, a idade, o salário e o cargo de 10 funcionários de
uma empresa. Faça um algoritmo que imprima os funcionários em ordem não-decrescente pela idade utilizando o
algoritmo SelectionSort. Utilize três procedimentos: um para preencher os dados dos funcionários, outro para
realizar a ordenação e um terceiro para imprimir os dados depois da ordenação. */

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
