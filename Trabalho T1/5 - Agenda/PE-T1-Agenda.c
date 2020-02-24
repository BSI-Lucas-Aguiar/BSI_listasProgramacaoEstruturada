//Lucas de Figueiredo
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inserirContato(FILE *arqAgenda);
void removerContato(FILE *arqAgenda);
void pesquisarContato(FILE *arqAgenda);
void listarContato(FILE *arqAgenda);
void imprimirAniversariantes(FILE *arqAgenda);

int main(){
	int saida=0, escolha=0, vazio=1;
	FILE *arqAgenda;
		while(saida==0){
		printf("\nMenu de Opcoes:");
		printf("\n(1) Inserir um contato.\n");
		printf("(2) Remover um contato pelo nome.\n");
		printf("(3) Pesquisar um contato pelo nome.\n");
		printf("(4) Listar todos os contatos na tela.\n");
		printf("(5) Imprimir na tela os anviversariantes do mes.\n");
		printf("(6) Sair da execucao.\n");

		printf("Informe o numero da opcao desejada:\n");
		scanf("%d", &escolha);
		switch(escolha){
			case 1:
			//Comando Windows
			system("cls");
			printf("Preencha os dados do novo contato!\n");
			inserirContato(arqAgenda);
		break;
			case 2:
			//Comando Windows
			system("cls");
			arqAgenda=fopen("Agenda.txt","r");
			if(arqAgenda==NULL){
				vazio=0;
			}
			if(vazio==0){
				printf("Nenhum contato listado.\n");
			}else{removerContato(arqAgenda);
			}
		break;
			case 3:
			//Comando Windows
			system("cls");
			arqAgenda=fopen("Agenda.txt","r");
			if(arqAgenda==NULL){
			vazio=0;
			}
			if(vazio==0){
				printf("Nenhum contato listado.\n");
			}else{pesquisarContato(arqAgenda);
			}
		break;
			case 4:
			//Comando Windows
			system("cls");
			arqAgenda=fopen("Agenda.txt","r");
			if(arqAgenda==NULL){
			vazio=0;
			}
			if(vazio==0){
				printf("Nenhum contato listado.\n");
			}else{listarContato(arqAgenda);
			}
		break;
			case 5:
			//Comando Windows
			system("cls");
			arqAgenda=fopen("Agenda.txt","r");
			if(arqAgenda==NULL){
			vazio=0;
			}
			if(vazio==0){
				printf("Nenhum contato listado.\n");
			}else{imprimirAniversariantes(arqAgenda);
			}
		break;
			case 6:
			printf("Obrigado por usar a agenda.");
			saida=1;
		break;
			default:
			//Comando Windows
			system("cls");
   			printf("Opcao invalida.\n");
		}
	}
	fclose(arqAgenda);
	return 0;
}

void inserirContato(FILE *arqAgenda){
	char nome[30];
	int numero, dia=0, mes=0;
	
	arqAgenda=fopen("Agenda.txt", "a");
	printf("Nome do contato:\n");
	scanf("%s", nome);
	printf("Numero de telefone de %s:\n", nome);
	scanf("%d", &numero);
	while((mes<=0)||(mes>=13)){
	printf("Mes do aniversario(somente o mes):\n");
	scanf("%d", &mes);
	}
	if((mes==1)||(mes==3)||(mes==5)||(mes==7)||(mes==8)||(mes==10)||(mes==12)){
		while((dia<=0)||(dia>=32)){
		printf("Dia do aniversario(somente o dia):\n");
		scanf("%d", &dia);
		}
	}
	if((mes==4)||(mes==6)||(mes==9)||(mes==11)){
		while((dia<=0)||(dia>=31)){
		printf("Dia do aniversario(somente o dia):\n");
		scanf("%d", &dia);
		}
	}
	if(mes==2){
		while((dia<=0)||(dia>=30)){
		printf("Dia do aniversario(somente o dia):\n");
		scanf("%d", &dia);
		}
	}
	
	fprintf(arqAgenda, "\n%s %d %d %d", nome, numero, dia, mes);
	printf("Contato adicionado.");
	fclose(arqAgenda);
}

//Consertar aqui
void removerContato(FILE *arqAgenda){
	int cont=1, id=0, numero, dia, mes, verifica=1;
	char nome[30], s[30];

	//arqAgenda = fopen("Agenda.txt","r");
	FILE *arqAux = fopen("Agenda2.txt","w");

	printf("Nome do contato que deseja excluir:\n");
	scanf("%s", s);
	
	fscanf(arqAgenda,"%s %d %d %d", nome, &numero, &dia, &mes);
	if(strcmp(nome, s) == 0){
			id=cont;
	}

	while(!feof(arqAgenda)){
		fscanf(arqAgenda,"%s %d %d %d", nome, &numero, &dia, &mes);

		if(strcmp(nome, s) == 0){
			id=cont;
		}else
			verifica=verifica+1;
			cont++;
	}

	if(verifica == cont){

		printf("\nContato nao encontrado!\n");
		printf("Insira um contato valido!\n");
		
		fclose(arqAgenda);
		fclose(arqAux);

		remove("Agenda2.txt");
		id=0;
	}
	if(id != 0){
		cont=1;
		rewind(arqAgenda);

		fscanf(arqAgenda,"%s %d %d %d", nome, &numero, &dia, &mes);

		if(id != cont){
			fprintf(arqAux,"%s %d %d %d\n", nome, numero, dia, mes);
		}

		while(!feof(arqAgenda)){
			fscanf(arqAgenda,"%s %d %d %d", nome, &numero, &dia, &mes);
			if(id != cont){
				printf("%s\n",nome);
				fprintf(arqAux,"%s %d %d %d\n", nome, numero, dia, mes);

			}
			cont++;

		}

		fclose(arqAgenda);
		fclose(arqAux);

		arqAgenda = fopen("Agenda.txt","w");
		arqAux = fopen("Agenda2.txt","r");

		fscanf(arqAux, "%s %d %d %d", nome, &numero, &dia, &mes);
		while(!feof(arqAux)){

			fprintf(arqAgenda,"%s %d %d %d\n", nome, numero, dia, mes);
			fscanf(arqAux, "%s %d %d %d", nome, &numero, &dia, &mes);

		}

		fclose(arqAgenda);
		fclose(arqAux);

		printf("\nContato %s Excluido com sucesso!\n", s);
		id=0;
		remove("Agenda2.txt");
	}
}

void pesquisarContato(FILE *arqAgenda){
	char nome[30], pesquisa[30];
	int numero, mes, dia;
	printf("Digite um nome para pesquisar:\n");
	scanf("%s", pesquisa);

	while(!feof(arqAgenda)){
		fscanf(arqAgenda, "%s %d %d %d ", nome, &numero, &dia, &mes);
		if(strcmp(pesquisa, nome) == 0){
				printf("%s %d %d/%d", nome, numero, dia, mes);
		}else{
			printf("Nao possue esse nome na agenda!");
		}
	}
	fclose(arqAgenda);
}

void listarContato(FILE *arqAgenda){
	char nome[30];
	int numero, dia, mes;
	
	printf("Lista de contatos:\n");
	while(!feof(arqAgenda)){
		fscanf(arqAgenda, "%s %d %d %d", nome, &numero, &dia, &mes);
		printf("%s %d %d/%d\n", nome, numero, dia, mes);
	}
	fclose(arqAgenda);
}

void imprimirAniversariantes(FILE *arqAgenda){
	char nome[30];
	int numero, dia, month, mes, contador=0;
	
	printf("Verificacao de aniversariantes!\n");
	printf("Digite o mes de hoje:\n");
	scanf("%d", &month);

	while(!feof(arqAgenda)){
		fscanf(arqAgenda, "%s %d %d %d", nome ,&numero, &dia, &mes);
		if(month==mes){
			printf("%s Faz aniversario dia: %d \n", nome, dia);
			contador++;
		}
	}
	if(contador==0){
		printf("Ninguem faz aniversario este mes!\n");
	}
	fclose(arqAgenda);
}

