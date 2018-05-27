#include <stdio.h>
#include <stdlib.h>

void 	request(int* min, int* max, int opt);

int  	main(void) {
	int 	min, max;

	request(&min, &max, 1);
	request(&min, &max, 0);
	printf("La plus petite valeur : %d\nLa plus grande valeur : %d\n", min, max);
	return EXIT_SUCCESS;
}

void 	request(int* min, int* max, int opt) {
	int 	a, t;

	printf("Entrez un entier : ");
	t = scanf("%d", &a);
	if (t != 1) {
		fprintf(stderr, "Verifiez votre valeur.\n");
		exit (1);
	}
	if (opt == 1) {
		*max = a;
		*min = a;
	}
	else {
		if (a != -1) {
			if (a < *min)
				*min = a;
			if (a > *max)
				*max = a;
			request(min, max, 0);
		}
	}
}