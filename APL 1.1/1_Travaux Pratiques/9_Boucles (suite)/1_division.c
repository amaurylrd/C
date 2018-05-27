#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int 	a, b, t;

	printf("Entrez une valeur >= 0 : ");
	t = scanf("%d", &a);
	if (t != 1 || a < 0) {
		fprintf(stderr, "Verifiez votre valeurs.\n");
		return EXIT_FAILURE;
	}
	printf("Entrez une valeur > 0 : ");
	t = scanf("%d", &b);
	if (t != 1 || a <= 0) {
		fprintf(stderr, "Verifiez votre valeurs.\n");
		return EXIT_FAILURE;
	}
	printf("%d = %d x %d + %d\n", a, a / b, b, a % b);
	return EXIT_SUCCESS;
}
