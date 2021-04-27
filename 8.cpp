#include <stdio.h>

int main(void) {
	int a,b,c;
	
	printf("Digite um valor pra a: \n");
	scanf("%d", &a);
	printf("Digite um valor pra b: \n");
	scanf("%d", &b);
	printf("Digite um valor pra c: \n");
	scanf("%d", &c);
	

	if (a > b)
		if (b > c) printf("%d %2d %2d\n", a,b,c);
		else
			if (a > c) printf("%d %2d %2d\n", a,c,b);
			else printf ("%d %2d %2d\n", c,a,b);
	else
		if (b > c)
			if (a > c) printf("%d %2d %2d\n", b,a,c);
			else printf("%d %2d %2d\n", b,c,a);
		else printf("%d %2d %2d\n", c,b,a);
		
	return 0;
}	
