#include<stdio.h>
#define atual 2023

main(){
	int nasc,idade=0, semanas=0, futuro=0;
	printf("\nDigite sua data de nascimento: ");
	scanf("%d",&nasc);
	idade = (atual-nasc);
	semanas = (idade*52);
	futuro=(2028-nasc);
	printf("\n Sua idade atual é -> %d ",idade);
	printf("\n Sua idade em semanas é-> %d ",semanas);
	printf("\n Sua idade em 2028 será -> %d ",futuro);
	
	
	
	
}
