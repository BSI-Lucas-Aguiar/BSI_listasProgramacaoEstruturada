/* 5) Considere um arquivo chamado "Distancias.txt" que armazena (em cada linha) o nome de uma cidade (sem espaços) e a
distância (em km) entre a mesma e Campos dos Goytacazes. Imagine que um usuário deseja saber quantos litros de combustível
e quanto custaria abastecer tais litros para ele chegar a cada uma das cidades partindo de Campos. Faça um algoritmo para ler
(pelo teclado) o consumo do veículo do usuário (em km/l), o valor do litro de combustível e depois gerar um arquivo chamado
"Gastos.txt" informando (em cada linha) o nome da cidade, quantos litros serão necessários para a viagem e o valor para abastecer
tais litros.  */

#include <stdio.h>

int main(){
	
	FILE *arqDistancias, *arqGastos;
	float kmlitro, precolitro, distancia, total;
	char cidade[20];
	
	arqDistancias = fopen("Distancias.txt", "r");
	if(arqDistancias == NULL){
		printf("Erro na abertuda do arquivo.");
		return 1;
	}
	
	printf("Informe o consumo do veículo, km/l:\n");
	scanf("%f", &kmlitro);
	printf("Informe o preco do combutivel, R$/l:\n");
	scanf("%f", &precolitro);
	
	arqGastos = fopen("Gastos.txt", "w");
	while(!feof(arqDistancias)){
		fscanf(arqDistancias, "%s %f", cidade, &distancia);
		total=((distancia/kmlitro)*precolitro);
		fprintf(arqGastos, "%s %.2f\n", cidade, total);
		printf("%s %.2f\n", cidade, total);
		
	}
	printf("\nArquivo Salvo.");

	fclose(arqDistancias);
	fclose(arqGastos);
	return 0;
}
