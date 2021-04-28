#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float n1,n2,n3,me,ma;

    printf("Informe a primeira nota:");
    scanf("%f", &n1);

    printf("\nInforme a segunda nota:");
    scanf("%f", &n2);

    printf("\nInforme a terceira nota:");
    scanf("%f", &n3);

    me = (n1 + n2 + n3) / 3;

    ma = (n1 + (n2 * 2) + (n3 * 3) + me) / 7;

    if(ma >= 90){
        printf("\nO aluno recebe um conceito A. Esta aprovado com a nota %.2f.",  ma);

    }else if(90 > ma && ma >= 75){
        printf("\nO aluno recebe um conceito B. Esta aprovado com a nota %.2f.", ma);

    }else if(75 > ma && ma >= 60){
        printf("\nO aluno recebe um conceito C. Esta aprovado com a nota %.2f.", ma);

    }else if(60 > ma && ma >= 40){
        printf("\nO aluno recebe um conceito D. Esta reprovado com a nota %.2f.", ma);

    }else if(40 > ma){
        printf("\nO aluno recebe um conceito E. Esta reprovado com a nota %.2f.", ma);
    }

return 0;
}
