/* 5) Considerando a struct do exercício anterior, faça um algoritmo que preencha os dados de 30 alunos,
sendo que a nota da P3 será calculada pelo algoritmo como a média das outras duas notas, e depois imprima
as três notas de um aluno cujo nome será informado pelo teclado na função main. Caso a turma tenha mais de
um aluno com o mesmo nome, imprima as três notas de todos eles. Utilize dois procedimentos: um para preencher
os dados dos alunos e outro para imprimir as informações solicitadas. */


#include <stdio.h>
#include <string.h>
#define TAM 30

struct dados{
	int matricula;
	char nome[10];
	float p1, p2, p3;
};

void leitura(struct dados alunos[]);
void impressao(struct dados alunos[], char pesquisa[]);

int main(){
	struct dados alunos[TAM];
	char pesquisa[30];
	leitura(alunos);
	printf("\nInforme o nome para buscar:\n");
	scanf("%s", pesquisa);
	impressao(alunos, pesquisa);

	return 0;
}


void leitura(struct dados alunos[]){
	int i;
	for(i=0; i<TAM; i++){
		printf("\nInforme a matricula do %d aluno:\n", i+1);
		scanf("%d", &alunos[i].matricula);
		printf("\nInforme o nome do %d aluno:\n", i+1);
		scanf("%s", alunos[i].nome);
		printf("\nInforme a nota P1 do %d aluno:\n", i+1);
		scanf("%f", &alunos[i].p1);
		while((alunos[i].p1<0)||(alunos[i].p1>10)){
			printf("\nInforme uma nota valida P1 do %d aluno:\n", i+1);
			scanf("%f", &alunos[i].p1);
		}
		printf("\nInforme a nota P2 do %d aluno:\n", i+1);
		scanf("%f", &alunos[i].p2);
		while((alunos[i].p2<0)||(alunos[i].p2>10)){
			printf("\nInforme uma nota valida P2 do %d aluno:\n", i+1);
			scanf("%f", &alunos[i].p2);
		}
		alunos[i].p3=(alunos[i].p1+alunos[i].p2)/2;
	}
}

void impressao(struct dados alunos[] ,char pesquisa[]){
	int i;
	for(i=0; i<TAM; i++){
		if(strcmp(alunos[i].nome, pesquisa)==0){
			printf("\nNOME: %s", alunos[i].nome);
			printf("\nMATRICULA: %d", alunos[i].matricula);
			printf("\nP1: %.2f", alunos[i].p1);
			printf("\nP2: %.2f", alunos[i].p2);
			printf("\nP3: %.2f", alunos[i].p3);
		}
	}
}
