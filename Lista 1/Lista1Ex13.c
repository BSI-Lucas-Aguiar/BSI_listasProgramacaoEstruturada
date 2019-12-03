/* 13) Fa�a um algoritmo que leia uma frase (considerando os espa�os) com no m�ximo 100 
caracteres e calcule o n�mero de vogais e consoantes existentes na frase. Fa�a dois procedimentos: 
um para ler a frase e outro para imprimir as informa��es. 
Obs.: Lembre-se que o usu�rio pode digitar letras mai�sculas e min�sculas. */

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
