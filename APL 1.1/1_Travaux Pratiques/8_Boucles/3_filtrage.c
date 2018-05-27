#include <stdio.h>
#include <stdlib.h>

int 	main() {
	int 	t;
	float	x;
	
	printf("Entrez votre moyenne : ");
	t = scanf("%f", &x);
	if (t != 1) {
		printf("Verifiez votre valeur.\n");
		return EXIT_FAILURE;
	}
	while (x < 0.0f || x > 20.0f) {
		printf("Verifiez votre moyenne\n");
		main();
	}
	if (x > 15.99f)
		printf("Votre mention est 'tres bien'.\n");
	else if (x > 13.99f)
		printf("Votre mention est 'bien'.\n");
	else if (x > 11.99f)
		printf("Votre mention est 'assez bien'.\n");
	else
		printf("Vous n'avez pas de mention.\n");
	exit (0);
}