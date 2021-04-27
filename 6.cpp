#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int valor1;
	int valor2;
	
	printf("Escolha 0 ou 1 : ");
	scanf("%i", &valor1);
	
	printf("Escolha 0 ou 1 : ");
	scanf("%i", &valor2);
	
	if(valor1 == valor2){

        if(valor1 == 1){

            printf("\nAmbos são verdadeiros!\n");

        }else{

            printf("\nAmbos são falsos!\n");
        }

    }else{

        printf("\nUm é verdadeiro e outro é falso!\n");

    }

return 0;
}
