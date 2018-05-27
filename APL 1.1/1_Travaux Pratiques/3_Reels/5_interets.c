#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int 	t, i;
	float	f;

	printf("Montant de l'investissement : ");
	t = scanf("%f", &f);
	if (t != 1) {
		fprintf(stderr, "Verifiez votre valeur.\n");
		return EXIT_FAILURE;
	}
  	for (i = 0 ; i < 7 ; i++) {
  		f *= 1.4; 
  		printf("%d : %9.2f\n", i+1, f);
  	}
  	return EXIT_SUCCESS;
}