#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

float altura, m;
char sexo; 
int main(){
	
	printf("Informe sua altura: \n");
	scanf("%f", &altura);
	printf("Informe seu sexo M para Masculino e F para Feminino \n");
	scanf("%s", &sexo);
		
	if(sexo=='M'){
		m=(72.7*altura) - 58;
		printf("Peso ideal = %.2f", m);
	}
	else
	{	
		m=(62.1*altura) - 44.7;
		printf("Peso ideal = %.2f", m);
	}
	printf("\n");

return 0;
}
