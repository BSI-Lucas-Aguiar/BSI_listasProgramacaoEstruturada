/* 2) Suponha que cada aluno fa�a tr�s provas, como mostra cada linha do arquivo "Notas.txt".
Fa�a um algoritmo para gerar o arquivo "Situacao.txt", onde cada linha contenha a m�dia final
do aluno e sua situa��o: �A� � Aprovado (m�dia igual ou superior a 5.0) ou �R� � Reprovado (m�dia inferior a 5.0). */

#include <stdio.h>

int main(){
	float media=0, nota1, nota2, nota3;
	FILE *arqNotas, *arqMedias;

	arqNotas = fopen("Notas.txt", "r");
	if(arqNotas == NULL){
		printf("Erro na abertura do arquivo.\n");
		return 1;
	}

	arqMedias = fopen("Situacao.txt", "w");
	printf("Medias: \n");
	while(!feof(arqNotas)){
		fscanf(arqNotas, "%f %f %f", &nota1, &nota2, &nota3);
		media = ((nota1 + nota2 + nota3)/3);
		if(media >=5.0){
			fprintf(arqMedias, "%.2f A\n", media);
			printf("%.2f A\n", media);
		}else{
			fprintf(arqMedias, "%.2f R\n", media);
			printf("%.2f R\n", media);
		}
	}
	fclose(arqNotas);
	fclose(arqMedias);

	return 0;
}

