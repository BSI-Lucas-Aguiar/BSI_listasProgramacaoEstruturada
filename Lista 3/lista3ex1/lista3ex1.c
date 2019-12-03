/* 1) Fa�a um algoritmo que leia de um arquivo chamado "Turma.txt" o nome dos alunos
de uma turma e as suas tr�s notas. Seu algoritmo deve ter como sa�da um arquivo
chamado "MediasAlunos.txt" que cont�m os nomes dos alunos e suas respectivas
m�dias (com duas casas decimais). */

#include <stdio.h>

int main (){
	float nota1, nota2, nota3, media;
	char nome[10];
	FILE *arqTurma, *arqMediasAlunos;

	arqTurma = fopen("Turma.txt","r");
	arqMediasAlunos = fopen("MediasAlunos.txt", "w");

	if(arqTurma == NULL){
		printf("\nErro na abertura do arquivo.\n");
		return 1;
	}

	while(!feof(arqTurma)){
		fscanf(arqTurma,"%s %f %f %f", &nome, &nota1, &nota2, &nota3);
		media = ((nota1 + nota2 +nota3)/3);
		fprintf(arqMediasAlunos, "%s  %.2f \n",nome, media);

	}
	fclose(arqTurma);
	fclose(arqMediasAlunos);

	printf("Pronto.");
	return 0;
}
