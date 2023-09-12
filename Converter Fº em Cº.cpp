#include <stdio.h>
#include <stdlib.h>

main ()
{
		float tempf, cent;
	printf("\nDigite o valor da temperatura em F -> :");
	scanf("%f", &tempf);
	cent= 5*(tempf -32)/9;
	printf("\n A temperatura em graus Cº -> %.2f \n\n ", cent);
}

