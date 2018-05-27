#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	double 	a, b, res;
	int 	t;

	printf("Entrez le montant des réparations : ");
	t = scanf("%lf", &a);
	if (t != 1) {
		printf("Verifiez vos valeurs.\n");
		return EXIT_FAILURE;
	}
	b = a * 0.1;
	if (b >= 800.0) {
		b = 800.0;
		printf("La franchise est egale a 800.0€\n");
	}
	else if (b < 800.0 && b > 200.0)
		printf("La franchise est egale a %.2f€\n", b);
	else if (b <= 200.0)
	{
		if (b == 200.0)
			printf("La franchise est egale a 200.0€\n");
		else if (a < 200.0) {
			printf("La franchise est egale a %.2f€\n", a);
			printf("La part assurance est de : 0.0€\n");
			return EXIT_SUCCESS;
		}
		b = a - 200.0;
		printf("La franchise est egale a %.2f€\n", a - b);
		printf("La part assurance est de : %.2f€\n", b);
		return EXIT_SUCCESS;
	}
	res = a - b;
	printf("La part assurance est de : %.2f€\n", res);
	return EXIT_SUCCESS;
}
