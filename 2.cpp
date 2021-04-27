#include <stdio.h>
#include <locale.h>

    int main() {
    setlocale(LC_ALL,"portuguese");
    char nome;
    int sexo, estadoc, tempodecasada;
	
    printf("Nome: ");
    scanf("%s", &nome);
	
    printf("Sexo: Masculino (1) ou Feminino (2)");
    scanf("%i", &sexo);

    printf("Estado Civil: Solteira (1) ou Casada (2)");
    scanf("%i", &estadoc);
	
    if(sexo == 2 && estadoc == 2){

    printf("Informe seu tempo de casada em anos:");
    scanf("%i", &tempodecasada);

    }

return 0;	    
}
