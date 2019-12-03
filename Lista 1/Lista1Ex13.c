/* 13) Faça um algoritmo que leia uma frase (considerando os espaços) com no máximo 100 
caracteres e calcule o número de vogais e consoantes existentes na frase. Faça dois procedimentos: 
um para ler a frase e outro para imprimir as informações. 
Obs.: Lembre-se que o usuário pode digitar letras maiúsculas e minúsculas. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define tam 100

void leitura(char frase2[]);
void impressao(char frase2[]);

int main(){
	char frase2[tam];
	
	leitura(frase2);
	impressao(frase2);
	
	return 0;
}

void leitura(char frase2[]){
	printf("Informe a frase:\n");
	scanf("%[^\n]s", frase2);
}

void impressao(char frase2[]){
	int i, vogal=0, consoante=0, tamanho;
	char frase[tam];
	tamanho=strlen(frase2);
	for(i=0; i<tamanho; i++){
		frase[i]=tolower(frase2[i]);
	}
	for(i=0; i<tamanho; i++){
		if((frase[i]=='a')||(frase[i]=='e')||(frase[i]=='i')||(frase[i]=='o')||(frase[i]=='u')){
			vogal++;
		}
		if((frase[i]=='b')||(frase[i]=='c')||(frase[i]=='d')||(frase[i]=='f')||(frase[i]=='g')||(frase[i]=='h')||(frase[i]=='j')||(frase[i]=='k')||(frase[i]=='l')||(frase[i]=='m')||(frase[i]=='n')||(frase[i]=='p')||(frase[i]=='q')||(frase[i]=='r')||(frase[i]=='s')||(frase[i]=='t')||(frase[i]=='v')||(frase[i]=='w')||(frase[i]=='x')||(frase[i]=='y')||(frase[i]=='z')){
			consoante++;
		}
	}
	printf("\nA frase possui %d consoantes", consoante);
	printf("\nA frase possui %d vogais", vogal);
}
