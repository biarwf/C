#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	char nome[50];
	float idade, salario, aumento =0, grat =0, desc=0, sbruto=0,sliquido=0;
	printf("\n Digite seu nome -> ");
	scanf("%49s",&nome);
	printf("\n Informe sua idade -> ");
	scanf("%f",&idade);
	printf("\n Informe seu sal�rio base -> ");
	scanf("%f",&salario);
	aumento = salario + (salario*0.30);
	grat = aumento + (aumento*0.20);
	desc = aumento - (aumento*0.15);
	sbruto= aumento + grat;
	sliquido= aumento + grat - desc;
	printf("\n O nome do funcion�rio � ->  %s ",nome);
	printf("\n Sal�rio Liqu�do ->  %.2f",sliquido);
	printf("\n Sal�rio Bruto -> %.2f",sbruto);
	return 0;
}
