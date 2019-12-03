/* 13) Considere um arquivo chamado "Cidades.txt" que armazena em cada linha o nome de uma cidade e o seu n�mero de habitantes.
Fa�a um algoritmo para ler esse arquivo e criar um arquivo chamado "Populacao.txt" contendo o nome da cidade mais populosa seguida
pelo seu n�mero de habitantes. - Obs.: A fun��o strcpy(str1,str2) da biblioteca string.h copia uma string para outra.
Ela copia a string str2 para a string str1. */

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
	arqSaida=fopen("Populacao.txt", "w");
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
