#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main ()
{
		float cat1, cat2, hip;
	printf("\nDigite o valor do cateto 1 -> :",cat1);
	scanf("%f", &cat1);
	printf("\nDigite o valor do cateto 2 ->  :",cat2);
	scanf("%f", &cat2);
	hip= sqrt((cat1*cat1)+(cat2*cat2));
	printf("\n Sua hipotenusa é -> %.2f ", hip);
}

