/* 15) Faça um algoritmo para imprimir o número de palavras (de no máximo 20 caracteres) presentes no arquivo "Texto.txt".
Considere que o arquivo não possui qualquer número, somente palavras. */

#include <stdio.h>

int main(){
	char palavra[20];
	int total=0;
	FILE *arqPalavras;
	arqPalavras=fopen("Texto.txt", "r");
	if(arqPalavras==NULL){
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	while(!feof(arqPalavras)){
		fscanf(arqPalavras, "%s", palavra);
		total++;
	}
	printf("O texto tem: %d palavras.", total);
	fclose(arqPalavras);
	return 0;
}
