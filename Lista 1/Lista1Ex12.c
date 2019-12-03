/* 12) Faça um algoritmo que leia uma frase (considerando os espaços) com no máximo 50 caracteres e 
imprima esta mesma frase sem os espaços. Faça dois procedimentos: um para ler a frase e outro para a 
impressão da mesma sem os espaços.*/

#include <stdio.h>
#include <string.h>
#define tam 50

void ler(char frase[]);
void imprime(char frase[]);

int main(){
	char frase[tam];
	
	ler(frase);
	imprime(frase);
	
	return 0;
}

void ler(char frase[]){
	printf("Informe a frase de ate 50 caracteres:\n");
	scanf("%[^\n]s", frase);
}

void imprime(char frase[]){
	int i, tamanho;
	tamanho=strlen(frase);
	printf("\nFrase sem espacos:\n");
	for(i=0; i<tamanho; i++){
		if(frase[i]!=' '){
			printf("%c", frase[i]);
		}
	}
}
