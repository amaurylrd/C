#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int 	x, t;

	printf("Entrez un entier naturel : ");
	t = scanf("%d", &x);
	if (t != 1) {
		fprintf(stderr, "Verifier votre valeur.\n");
		return EXIT_FAILURE;
	}
	if (x % 3 == 1)
		x -= 2; 
	if (x % 3 == 2)
		x++;
	printf("La reponse est : %d\n", x);
	return EXIT_SUCCESS;
}
