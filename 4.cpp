#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int a,b,s; 
int main(){
	
	printf("Informe 2 valores: \n");
	scanf("%d %d", &a,&b);
	
	if(a==b){
		s=a+b;
		printf("%d", s);
	}
	else
	{	
		s=a*b;
		printf("%d",s);
	}
	printf("\n");

return 0;
}
