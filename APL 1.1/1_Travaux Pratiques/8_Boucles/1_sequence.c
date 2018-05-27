#include <stdio.h>
#include <stdlib.h>

void	version1(int a, int b);
void 	version2(int a, int b);
void 	version3(int a, int b);

int 	main(void) {
	int 	a, b, t;
	
	printf("Entrez deux bornes entieres (a,b) : ");
	t = scanf("%d,%d", &a, &b);
	if (t != 2) {
		printf("Verifiez vos donnees.\n");
		return EXIT_FAILURE;
	}
	version1(a, b);
	version2(a, b);
	version3(a, b);
	return EXIT_SUCCESS;
}

void 	version1(int a, int b) {
	if (a == b)
		printf("%d", a);
	else if (a > b) {
		printf("%d ", b);
		while (a > b)
			printf("%d ", ++b);
	}
	else if (a < b) {
		printf("%d ", a);
		while (a < b)
			printf("%d ", ++a);
	}	
	putchar('\n');
}

void 	version2(int a, int b) {
	if (a == b)
		printf("%d", a);
	else if (a > b) {
		printf("%d ", b);
		do printf("%d ", ++b); 
		while (a > b);
	}
	else if (a < b) {
		printf("%d ", a);
		do printf("%d ", ++a);
		while (a < b);
	}
	putchar('\n');
}

void 	version3(int a, int b) {
	int 	i;

	if (a == b)
		printf("%d", a);
	else if (a > b) {
		for (i = b ; a > i ; i++)
			printf("%d ", i);
		printf("%d ", a); 
	}
	else if (a < b) {
		for (i = a ; i < b ; i++)
			printf("%d ", i);
		printf("%d ", b);
	}
	putchar('\n');
}
