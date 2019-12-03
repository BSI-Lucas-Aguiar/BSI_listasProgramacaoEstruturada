/* 7) Considere um arquivo chamado "Distancias.txt" que armazena (em cada linha) o nome de uma cidade (sem espaços)
e a distância (em km) entre a mesma e Campos dos Goytacazes. Imagine que um usuário deseja saber quantos litros de
combustível e quanto custaria abastecer tais litros para ele chegar a   uma das cidades partindo de Campos.
Assim, faça um algoritmo para ler (pelo teclado) a cidade de destino, o consumo do veículo do usuário (em km/l),
o valor do litro de combustível e depois gerar um arquivo chamado "Gastos.txt" informando o nome da cidade de destino,
quantos litros serão necessários para a viagem e o valor para abastecer tais litros.
- Obs.: Utilize a função strcmp(str1,str2) da biblioteca string.h para comparar os nomes das cidades. Esta função retorna 0 (zero) se str1 é igual a str2. */

#include <stdio.h>
#include <string.h>

int main(){
	FILE *arqDistancias, *arqGastos;
	char cidade[15], destino[15];
	float kmlitro, precolitro, total, distancia;
	
	arqDistancias=fopen("Distancias.txt", "r");
	printf("Cidades Disponiveis:\n");
	while(!feof(arqDistancias)){
		fscanf(arqDistancias, "%s %f", cidade, &distancia);
		printf("%s %.2f\n", cidade, distancia);
	}
	fclose(arqDistancias);
	
	printf("Informe o consumo do veículo, km/l:\n");
	scanf("%f", &kmlitro);
	printf("Informe o preco do combutivel, R$/l:\n");
	scanf("%f", &precolitro);
	printf("Informe corretamente a cidade desejada:\n");
	scanf("%s", destino);
	
	arqDistancias=fopen("Distancias.txt","r");
	arqGastos=fopen("Gastos.txt","w");
	while(!feof(arqDistancias)){
		fscanf(arqDistancias, "%s %f", cidade, &distancia);
		if((strcmp(cidade, destino))==0){
			total=((distancia/kmlitro)*precolitro);
			fprintf(arqGastos, "%s %.2f\n", cidade, total);
			printf("%s %.2f\n", cidade, total);
			printf("Arquivo Salvo.");
		}
	}
	fclose(arqDistancias);
	fclose(arqGastos);
	return 0;
}
