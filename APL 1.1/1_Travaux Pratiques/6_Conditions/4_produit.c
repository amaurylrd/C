#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int a, b, t;

	printf("Entrez deux entiers naturels (a*b) : ");
	t = scanf("%d*%d", &a, &b);
	if (t != 2) {
		fprintf(stderr, "Verifier vos valeurs.\n");
		return EXIT_FAILURE;
	}
	if ((a >= 0 && b < 0) || (b >= 0 && a < 0))
		printf("Le signe du produit est négatif.\n");
	else
		printf("Le signe du produit est positif.\n");
	return EXIT_SUCCESS;
}
