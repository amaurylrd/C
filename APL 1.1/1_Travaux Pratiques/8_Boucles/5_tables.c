#include <stdio.h>
#include <stdlib.h>

void 	table(int nb);
void 	request(void);

int 	main() {
	request();
	return EXIT_SUCCESS;
}

void 	request(void) {
	int 	nb, t;

	printf("Entrez un entier : ");
	t = scanf("%d", &nb);
	if (t != 1) {
		fprintf(stderr, "Verifiez votre valeur.\n");
		exit (1);
	}
	if (nb == -1)
		exit (0);
	table(nb);
}


void 	table(int nb) {
	int 	i;

	for (i = 1 ; i <= 10 ; i++)
		printf("  %d x %2.d  =   %d\n", nb, i, (nb*i));
	request();
}