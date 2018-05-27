#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int		main(void) {
	int		t;
	double	a;
	long	convert_a, pieds, pouces;

	printf("Entrez votre a : ");
	t = scanf("%lf", &a);
	if (t != 1 || a <= 0) {
		fprintf(stderr, "Verifiez votre valeur.\n");
		return EXIT_FAILURE;
	}
	a *= 100.0;
	convert_a = lround(a / 2.56);
	pieds = lround(convert_a / 12);
	pouces = lround(convert_a % 12);
	printf("Votre taille est de");
	if (pieds > 1)
		printf(" %ld pieds ", pieds);
	else if (pieds <= 0)
		putchar(' ');
	else
		printf(" %ld pied ", pieds);
	if (pouces > 1)
		printf("%ld pouces\n", pouces);
	else if (pouces <= 0)
		putchar('\n');
	else
		printf("%ld pouces\n", pouces);
	return EXIT_SUCCESS;
}
