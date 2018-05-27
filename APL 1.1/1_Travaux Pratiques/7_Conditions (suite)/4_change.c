#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int 	t;
	double 	x, input, res;
	
	printf("Entrez le taux de change : ");
	t = scanf("%lf", &x);
	if (t != 1) {
		printf("Verifiez vos valeurs.\n");
		return EXIT_FAILURE;
	}
	printf("Entrez la somme à convertir : ");
	t = scanf("%lf", &input);
	if (t != 1) {
		printf("Verifiez vos valeurs.\n");
		return EXIT_FAILURE;
	}
	res = (input) * (x);
	if (input > res)
		printf("La somme sera de £%.2f\n", res);
	else
		printf("La somme sera de %.2f€\n", res);
	return EXIT_SUCCESS;
}
