/* 8) Considere um arquivo de entrada chamado "Cidades.txt" que armazena (em cada linha) o nome de uma cidade (sem espaços)
e o seu número de habitantes. Faça um algoritmo que leia o arquivo de entrada e gere um arquivo chamado "Saida.txt" contendo
o nome da cidade mais populosa seguida do seu número de habitantes. */

#include <stdio.h>
#include <string.h>
int main(){
	char cidade[20], maiorcidade[20];
	int populacao, maiorpopulacao=0;
	FILE *arqCidades, *arqSaida;
	
	arqCidades=fopen("Cidades.txt", "r");
	if(arqCidades==NULL){
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	arqSaida=fopen("Saida.txt", "w");
	while(!feof(arqCidades)){
		fscanf(arqCidades, "%s %d", cidade, &populacao);
		if(populacao>maiorpopulacao){
			maiorpopulacao=populacao;
			strcpy(maiorcidade, cidade);
		}
	}
	fprintf(arqSaida, "%s %d", maiorcidade, maiorpopulacao);
	printf("Arquivo salvo.");
	
	fclose(arqCidades);
	fclose(arqSaida);
	return 0;
}
