/* 3) Fa�a um algoritmo que leia (na fun��o main) o sal�rio bruto de uma pessoa,
calcule e imprima o seu sal�rio l�quido (sal�rio l�quido = sal�rio bruto � impostos)
e quanto que esta pessoa ir� pagar de imposto, de acordo com a tabela abaixo:
? Sal�rio bruto at� 2246,75 -  � isento
? Sal�rio bruto de 2246,76 at� 2995,70 -  7,5% do sal�rio
? Sal�rio bruto de 2995,71 at� 3743,19 -  15,5% do sal�rio
? Sal�rio bruto acima de 3743,20 -  22,5% do sal�rio
Utilize um procedimento para realizar o c�lculo e a impress�o das informa��es desejadas. */
#include <stdio.h>

void calcularImposto(float salarioBruto){
	float salarioLiquido;
	
	if(salarioBruto<=2245.75){
		salarioLiquido=salarioBruto;
	}

	if((salarioBruto>=2245.76)&&(salarioBruto<=2995.70)){
		salarioLiquido=salarioBruto-((salarioBruto/100)*7.5);
	}

	if((salarioBruto>=2995.71)&&(salarioBruto<=3743.19)){
		salarioLiquido=salarioBruto-((salarioBruto/100)*15.5);
	}

	if(salarioBruto>=3743.20){
		salarioLiquido=salarioBruto-((salarioBruto/100)*22.5);
	}

	printf("\n\nSalario Liquido: %.2f", salarioLiquido);
}

int main(){
	float salarioBruto;
	
	printf("Informe o salario bruto:\n");
	scanf("%f", &salarioBruto);
	
	calcularImposto(salarioBruto);
	
	return 0;
}
