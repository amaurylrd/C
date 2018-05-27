#include <stdio.h>
#include <stdlib.h>

int  main(void) {
	int 	a, b, c, t;

	printf("Entrez trois entiers naturels (a:b:c)  : ");
	t = scanf("%d:%d:%d", &a, &b, &c);
	if (t != 3) {
		fprintf(stderr, "Verifier votre valeur.\n");
		return EXIT_FAILURE;
	}
	if (a > b && b > c)
		printf("L'entier le plus grand est : %d\n", a);
	else if (a < b && b < c)
		printf("L'entier le plus grand est : %d\n", c);
	else
		printf("L'entier le plus grand est : %d\n", b);
	return EXIT_SUCCESS;
}