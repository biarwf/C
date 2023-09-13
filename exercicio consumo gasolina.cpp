#include <stdio.h>

main(){
	float dist, consumo, preco, litros =0, gasto=0;
	printf("\n Informe a distância em km -> ");
	scanf("%f",&dist);
	printf("\n Informe o consumo do seu carro (km/l) -> ",consumo);
	scanf("%f",&consumo);
	printf("\n Informe o valor do combustível -> ");
	scanf("%f",&preco);
	litros = (dist/consumo);
	gasto =(litros*preco);
	printf("\n Maria vai gastar na viagem -> %0.2f",gasto);
	printf("\n A quantidade de litros de gasolina é -: %0.2f",litros);
}
