#include <stdio.h>
#include <stdlib.h>


int main (void) {
	char nome [50];
	char sexo, estadocivil;
	int anos;
	
	printf("Nome: ");
	scanf("%s", &nome);
	printf("Sexo (M: Masculino, F: Feminino )");
	scanf("%s", &sexo);
	printf("Estado civil (C: Casado(a), S: solteiro(a): )");
	scanf("%s", &estadocivil);
	
	if(sexo == 'F' && estadocivil == 'C')
	{
		printf("Tempo de casamento em anos: ");
		scanf("%d", &anos);
	}
	
	return 0;
}
