/* 14) Faça um algoritmo que leia uma frase (considerando os espaços) com no máximo 30 caracteres 
e verifique se uma letra (lida pelo teclado na função main) existe na frase. Faça um procedimento para 
ler a frase e uma função para a verificação. A impressão da informação tem que ser feita na função main. 
Obs.: Lembre-se que o usuário pode digitar letras maiúsculas e minúsculas. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define tam 30

void leitura(char frase[]);
int impressao(char frase[], char letra[]);

int main(){
	char frase[tam], letra[0];
	int resultado=0;
 
	leitura(frase);
	printf("\nInforme a letra a ser pesquisada:\n");
	scanf("%s", letra);
	resultado=impressao(frase, letra);
	if(resultado==1){
		printf("\nA letra %s esta presente na frase.", letra);
	}else{printf("A letra %s nao esta presente na frase", letra);
	}
	return 0;
}

void leitura(char frase[]){
	printf("Informe a frase de ate 30 caracteres:\n");
	scanf("%[^\n]s", frase);
}

int impressao(char frase[], char letra[]){
	int i, tamanho, resultado=0;
	char frase2[tam], letra2[0];
	tamanho=strlen(frase);
	for(i=0; i<tamanho; i++){
		frase2[i]=tolower(frase[i]);
	}
	letra2[0]=tolower(letra[0]);
	for(i=0; i<tamanho; i++){
		if(frase2[i]==letra2[0]){
			resultado=1;
		}
	}
	return resultado;
}
