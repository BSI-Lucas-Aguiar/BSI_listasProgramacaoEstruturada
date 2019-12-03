/* 12) Fa�a um algoritmo que leia uma frase (considerando os espa�os) com no m�ximo 50 caracteres e 
imprima esta mesma frase sem os espa�os. Fa�a dois procedimentos: um para ler a frase e outro para a 
impress�o da mesma sem os espa�os.*/

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
