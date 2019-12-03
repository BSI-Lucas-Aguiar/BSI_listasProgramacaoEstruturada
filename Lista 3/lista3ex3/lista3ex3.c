/* 3) Faça um algoritmo que leia de um arquivo chamado "Medias.txt" o nome dos alunos e as suas respectivas médias.
Seu algoritmo deve ter como saída um arquivo chamado "Aprovados.txt", que contém os nomes dos alunos com média igual
ou superior a 7.0, e outro arquivo chamado "Reprovados.txt", que contém os nomes dos alunos com média inferior a 7.0. */

#include <stdio.h>

int main(){
	float notas;
	char nomes[7];
	FILE *arqMedias, *arqAprovados, *arqReprovados;

	arqMedias = fopen("medias.txt", "r");
	while(fscanf(arqMedias, "%s %f", nomes, &notas) != EOF){
		if(notas >= 7.0){
			arqAprovados = fopen("Aprovados.txt", "r");
			if(arqAprovados == NULL){
				arqAprovados = fopen("Aprovados.txt", "w");
			}else{
				arqAprovados = fopen("Aprovados.txt", "a");
			}
			fprintf(arqAprovados, "%s %.2f\n", nomes, notas);
			fclose(arqAprovados);
		}else{
			arqReprovados = fopen("Reprovados.txt", "r");
			if(arqReprovados == NULL){
				arqReprovados = fopen("Reprovados.txt", "w");
			}else{
				arqReprovados = fopen("Reprovados.txt", "a");
			}
			fprintf(arqReprovados, "%s %.2f\n", nomes, notas);
			fclose(arqReprovados);
		}
	}
	fclose(arqMedias);
	printf("Pronto.");
	return 0;
}
