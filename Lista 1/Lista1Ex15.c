/* 15)Faça um algoritmo que leia algumas palavras (com no máximo 10 caracteres) e calcule quantas palavras 
Sim e Nao foram digitadas. O programa deve parar de ler as palavras quando o usuário digitar Fim. O seu programa 
também deve informar a porcentagem de cada uma (Sim e Nao) em relação ao total de palavras digitadas. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define tam 10

int main(){
	char frase[tam];
	int i, totalsim=0, totalnao=0, total=0;
	float porcentagemsim=0, porcentagemnao=0;
	
	printf("Digite uma palavra:\n");
	scanf("%s", frase);
	total++;
	printf("\nTotal de palavras: %d", total);
	
	for (i=0;i<strlen(frase);i++){
		frase[i]=toupper(frase[i]);
	}
	if(strcmp(frase,"SIM")==0){
		totalsim++;
	}
	if(strcmp(frase,"NAO")==0){
		totalnao++;
	}
	printf("\nTotal de sim: %d", totalsim);
	printf("\nTotal de nao: %d", totalnao);

    while(strcmp(frase,"FIM")!=0){
		printf("\nDigite uma palavra:\n");
		scanf("%s", frase);
		total++;
		printf("\nTotal de palavras: %d",total);
		for (i=0;i<strlen(frase);i++){
		    frase[i]=toupper(frase[i]);
	    }
		if(strcmp(frase,"SIM")==0){
			totalsim++;
		}
		if(strcmp(frase,"NAO")==0){
			totalnao++;
		}
		printf("\nTotal de sim: %d", totalsim);
		printf("\nTotal de nao: %d", totalnao);
	}
	total--;
	porcentagemsim=(((float)totalsim/total)*100);
	porcentagemnao=(((float)totalnao/total)*100);
	    
	printf("\n\n-----Fim do Programa-----");
	printf("\nTotal de palavras: %d", total);
	printf("\nTotal de nao: %d", totalnao);
	printf("\nTotal de sim: %d", totalsim);
	printf("\nPorcentagem de Sim: %.2f%%", porcentagemsim);
	printf("\nPorcentagem de Nao: %.2f%%", porcentagemnao);
	
	return 0;
}
