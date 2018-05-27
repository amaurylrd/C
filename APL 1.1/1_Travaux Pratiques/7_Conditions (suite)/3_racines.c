#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int 	main() {
	double 	a, b, c, d;
	int 	t;

	printf("Entrez trois coefficients (a,b,c) : ");
	t = scanf("%lf,%lf,%lf", &a, &b, &c);
	if (t != 3) {
		printf("Verifiez vos valeurs.\n");
		return EXIT_FAILURE;
	}
	d = pow(b, 2.0) - (4.0 * a * c);
	if (d > 0.0) {
		c = (-b - sqrt(d)) / (2.0f * a);
		printf("La première solution est egale à  : %.2f\n", c);
		c = (-b + sqrt(d)) / (2.0f * a);
		printf("La seconde solution est egale à   : %.2f\n", c);
	}
	else if (d == 0.0) {
		c = (-b) / (2.0 * a);
		printf("L'unique solution est egale à : %.2f\n", c);
	}
	else
		printf("Cette equation du second degre ne possede aucune solution.\n");
	return EXIT_SUCCESS;
}
