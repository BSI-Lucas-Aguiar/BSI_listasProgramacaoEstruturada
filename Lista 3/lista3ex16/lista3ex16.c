/* 16) Considere um arquivo chamado "Palavras.txt" que armazena em cada linha uma palavra de no m�ximo 15 caracteres.
Fa�a um algoritmo para ler pelo teclado uma palavra (tamb�m de no m�ximo 15 caracteres) e imprimir o n�mero de vezes
que essa palavra aparece no arquivo. - Obs.: Utilize a fun��o strcmp(str1,str2) da biblioteca string.h para comparar
as palavras. Esta fun��o retorna 0 (zero) se str1 � igual a str2. */

#include <stdio.h>
#include <string.h>

int main(){
	int total=0;
	char palavra[15], pesquisa[15];
	FILE *arqPalavras;
	arqPalavras=fopen("Palavras.txt","r");
	if(arqPalavras==NULL){
		printf("Erro na abertura do arquivo.");
		return 1;
	}
	printf("Informe a palavra a ser pesquisada:\n");
	scanf("%s", pesquisa);
	while(!feof(arqPalavras)){
		fscanf(arqPalavras, "%s", palavra);
		if((strcmp(palavra, pesquisa))==0){
			total++;
		}
	}
	fclose(arqPalavras);
	printf("A palavra %s, aparece %d vezes.", pesquisa, total);
	return 0;
}
