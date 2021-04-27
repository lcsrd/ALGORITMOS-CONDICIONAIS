#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
	int peso;
	float altura, imc;
	
	printf("Informe o peso em KG: ");
	scanf("%d", &peso);
	
	printf("Informe a altura em METROS: ");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
	printf("IMC = %.2f", imc);
  	
  if (imc < 20)
     printf("\nABAIXO DO PESO");
  else if ((imc >= 20) && (imc < 25))
          printf("\nPESO NORMAL");
       else if ((imc >= 25) && (imc < 30))
               printf("\nACIMA DO PESO");
            else if ((imc > 30))
                    printf("\nOBESO");
		
return 0;
}
