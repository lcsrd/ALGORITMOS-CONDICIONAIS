#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL,"portuguese");
	float v1;
	int opcao;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &v1);
	printf("Entre com a opção desejada: ");
	printf("\n1. A vista dinheiro ou cheque, recebe 10 porcento de desconto");
  	printf("\n2. A vista cartão de crédito, recebe 5 porcento de desconto");
  	printf("\n3. Em duas vezes, preço normal de entiqueta sem juros");
  	printf("\n4. Em tres vezes, prço normal de entiqueta com juros de 10 porcento\n");
  	printf("Qual a opção: ");
  	
  	scanf("%i", &opcao);
  	
  	switch(opcao)
	{
  	case 1:
  		printf("A vista ou cheque %.2f.\nOpção %d %.2f", v1,opcao,v1*0.9);
  		break;
  	case 2:
  		printf("A vista cartão %.2f.\nOpção %d %.2f", v1,opcao,v1*=0.95);
  		break;
  	case 3:
  		printf("Compra em 2 vezes %.2f.\nOpção %d %.2f", v1,opcao,v1);
  		break;
  	case 4:
  		printf("Compra em 3 vezes %.2f.\nOpção %d %.2f", opcao,v1*=1.1);
  		
  		break;	  	
}


return 0;
}
