#include <stdio.h>
#include <stdlib.h>

int main () {
	int n;
	
	printf("Digite um numero: ");
	scanf("%d", &n);
	
	if (n%2==0) {
		printf("Par");
	}
	else {
		printf("Impar");
	}
	
return 0;
}
