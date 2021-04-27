#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int n,s; 
int main(){
	
	printf("Informe um valor: \n");
	scanf("%d", &n);
	
	if(n%2==0){
		s=n+5;
		printf("O resultado eh %d", s);
	}
	else
	{	
		s=n+8;
		printf("O resultado eh %d", s);
	}
	printf("\n");

return 0;
}
