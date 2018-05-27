#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int 	t, i;
	float	f;
	char 	c;

	printf("Saisir un reel : ");
	t = scanf("%f", &f);
	if (t != 1) {
		fprintf(stderr, "Verifiez votre valeur.\n");
		return EXIT_FAILURE;
	}
	printf("%e\n", f);
	getchar();
  	printf("Saisir un caractere : ");
  	t = scanf("%c", &c);
  	if (t != 1) {
		fprintf(stderr, "Verifiez votre saisie.\n");
		return EXIT_FAILURE;
	}
  	for (i = 0 ; i < 5 ; i++)
  		printf("%d : %c\n", i, c);
  	return EXIT_SUCCESS;
}