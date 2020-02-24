/* 3) Faça um algoritmo que leia (na função main) o salário bruto de uma pessoa,
calcule e imprima o seu salário líquido (salário líquido = salário bruto – impostos)
e quanto que esta pessoa irá pagar de imposto, de acordo com a tabela abaixo:
? Salário bruto até 2246,75 -  é isento
? Salário bruto de 2246,76 até 2995,70 -  7,5% do salário
? Salário bruto de 2995,71 até 3743,19 -  15,5% do salário
? Salário bruto acima de 3743,20 -  22,5% do salário
Utilize um procedimento para realizar o cálculo e a impressão das informações desejadas. */
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
