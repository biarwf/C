#include <stdio.h>
#include <stdlib.h>

main ()
{
		float a, b, sub, soma, multi, d;
	printf("\nDigite o valor A:");
	scanf("%f", &a);
	printf("\nDigite o valor B:");
	scanf("%f", &b);
	soma = a + b;
	sub = a - b;
	multi = a * b;
	d = a / b;
	printf("\n SOMA: %.2f \n\n ", soma);
	printf("\n SUBTRAÇÃO: %.2f \n\n ", sub);
	printf("\n MULTIPLICAÇÃO: %.2f \n\n ", multi);
	printf("\n DIVISÃO: %.2f \n\n ", d);
	
	
} 


