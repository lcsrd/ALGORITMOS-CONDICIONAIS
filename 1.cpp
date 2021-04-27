#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int a,b,c,s; 
int main(){
	
	printf("Informe 3 valores: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	s=a+b;
	
	if(s < c){
		printf("A soma de A+B eh menor que %d", c);
	}
	else if(s > c){
		printf("A soma de A+B eh maior que %d", c);
	}
	else if(s == c){
		printf("A soma de A+B eh igual a %d", c);
	}
	
	
return 0;
}
