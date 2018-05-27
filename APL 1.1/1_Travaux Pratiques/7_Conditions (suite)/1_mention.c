#include <stdio.h>
#include <stdlib.h>

int 	main() {
	int 	t;
	float	x;
	
	printf("Entrez votre moyenne : ");
	t = scanf("%f", &x);
	if (t != 1 || x < 0.0f || x > 20.0f) {
		printf("Verifiez votre valeur.\n");
		return EXIT_FAILURE;
	}
	if (x > 15.99f)
		printf("Votre mention est 'tres bien'.\n");
	else if (x > 13.99f)
		printf("Votre mention est 'bien'.\n");
	else if (x > 11.99f)
		printf("Votre mention est 'assez bien'.\n");
	else
		printf("Vous n'avez pas de mention.\n");
	return EXIT_SUCCESS;
}