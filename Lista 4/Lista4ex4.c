/* 4) Considere uma struct que armazena os seguintes dados de um aluno: matrícula, primeiro nome,
nota da P1, nota da P2 e nota da P3. Faça um algoritmo que preencha os dados de 30 alunos,
sendo que a nota da P3 será calculada pelo algoritmo como a média das outras duas notas.
O algoritmo também tem que imprimir a quantidade de alunos Aprovados e Reprovados,
considerando a média para aprovação maior ou igual a 6,0. Utilize dois procedimentos:
um para preencher os dados dos alunos e outro para imprimir as informações solicitadas. */

#include <stdio.h>
#include <string.h>
#define TAM 30

struct dados{
	int matricula;
	char nome[10];
	float p1, p2, p3;
};

void leitura(struct dados alunos[]);
void impressao(struct dados alunos[]);

int main(){
	struct dados alunos[TAM];
	
	leitura(alunos);
	impressao(alunos);
	
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

void impressao(struct dados alunos[]){
	int contA=0, contR=0, i;
	for(i=0; i<TAM; i++){
		if(alunos[i].p3>=6){
			contA++;
		}else{
			contR++;
		}
	}
	printf("\nAlunos Aprovados: %d", contA);
	printf("\nAlunos Reprovados: %d", contR);
}
