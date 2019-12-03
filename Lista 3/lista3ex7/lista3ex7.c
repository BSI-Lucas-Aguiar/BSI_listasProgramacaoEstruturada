/* 7) Considere um arquivo chamado "Distancias.txt" que armazena (em cada linha) o nome de uma cidade (sem espa�os)
e a dist�ncia (em km) entre a mesma e Campos dos Goytacazes. Imagine que um usu�rio deseja saber quantos litros de
combust�vel e quanto custaria abastecer tais litros para ele chegar a   uma das cidades partindo de Campos.
Assim, fa�a um algoritmo para ler (pelo teclado) a cidade de destino, o consumo do ve�culo do usu�rio (em km/l),
o valor do litro de combust�vel e depois gerar um arquivo chamado "Gastos.txt" informando o nome da cidade de destino,
quantos litros ser�o necess�rios para a viagem e o valor para abastecer tais litros.
- Obs.: Utilize a fun��o strcmp(str1,str2) da biblioteca string.h para comparar os nomes das cidades. Esta fun��o retorna 0 (zero) se str1 � igual a str2. */

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
	
	printf("Informe o consumo do ve�culo, km/l:\n");
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
