#include <stdio.h>

main(){
	float produto, desconto, vfinal=0;
	printf("\n C�lculo Desconto 10%%");
	printf("\n Entre com o valor do produto (R$) -> ");
	scanf("%f",&produto);
	desconto = (produto*0.1);
	vfinal=produto-desconto;
	printf("\n O valor final do produto, ap�s o desconto de 10% � -> %.2f ",vfinal);

}
