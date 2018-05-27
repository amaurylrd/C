#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int 	t, i;
	float	f, res;

	res = 0;
  	for (i = 0 ; i < 5 ; i++) {
  		printf("Saisir un reel : ");
		t = scanf("%f", &f);
		if (t != 1) {
			fprintf(stderr, "Verifiez votre valeur.\n");
			return EXIT_FAILURE;
		}
  		res += f;
  	}
  	printf("%.3f\n", res);
  	return EXIT_SUCCESS;
}