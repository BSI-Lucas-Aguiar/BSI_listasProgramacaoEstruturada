/* 14) Considere um arquivo chamado "Pessoas.txt" que armazena em cada linha o nome de uma pessoa e o seu ano de nascimento.
Faça um algoritmo para ler esse arquivo e criar dois outros arquivos: um chamado "Maiores.txt", que contém em cada linha o
nome e a idade das pessoas maiores de idade (idade = 18 anos) e outro chamado "Menores.txt", que contém em cada linha o nome
e a idade das pessoas menores de idade (idade < 18 anos) */

#include <stdio.h>

int main(){
	int idade;
	char nome[10];
	FILE *arqPessoas, *arqMaiores, *arqMenores;
	arqPessoas=fopen("Pessoas.txt","r");
	if(arqPessoas==NULL){
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	arqMaiores=fopen("Maiores.txt","w");
	arqMenores=fopen("Menores.txt", "w");
	while(!feof(arqPessoas)){
		fscanf(arqPessoas, "%s %d", nome, &idade);
		if(idade>=18){
			fprintf(arqMaiores, "%s %d\n", nome, idade);
		}else{
			fprintf(arqMenores, "%s %d\n", nome, idade);
		}
	}
	fclose(arqPessoas);
	fclose(arqMaiores);
	fclose(arqMenores);
	printf("Arquivo Salvo.");
	return 0;
}
