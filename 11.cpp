#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL,"portuguese");
	float v1;
	int opcao;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &v1);
	printf("Entre com a op��o desejada: ");
	printf("\n1. A vista dinheiro ou cheque, recebe 10 porcento de desconto");
  	printf("\n2. A vista cart�o de cr�dito, recebe 5 porcento de desconto");
  	printf("\n3. Em duas vezes, pre�o normal de entiqueta sem juros");
  	printf("\n4. Em tres vezes, pr�o normal de entiqueta com juros de 10 porcento\n");
  	printf("Qual a op��o: ");
  	
  	scanf("%i", &opcao);
  	
  	switch(opcao)
	{
  	case 1:
  		printf("A vista ou cheque %.2f.\nOp��o %d %.2f", v1,opcao,v1*0.9);
  		break;
  	case 2:
  		printf("A vista cart�o %.2f.\nOp��o %d %.2f", v1,opcao,v1*=0.95);
  		break;
  	case 3:
  		printf("Compra em 2 vezes %.2f.\nOp��o %d %.2f", v1,opcao,v1);
  		break;
  	case 4:
  		printf("Compra em 3 vezes %.2f.\nOp��o %d %.2f", opcao,v1*=1.1);
  		
  		break;	  	
}


return 0;
}
