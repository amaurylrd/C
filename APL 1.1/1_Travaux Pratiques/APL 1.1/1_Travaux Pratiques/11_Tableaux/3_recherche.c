#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int 	main(void) {
	int 	x, i, a;
	int 	tab[10];

	srand(time(NULL));
	for (i = 0 ; i < 10 ; i++) {
		x = (rand() % 100 - 50);
		tab[i] = x;
		printf("%d ", tab[i]);
	}
	printf("\nEntrez un entier : ");
	i = scanf("%d", &a);
	if (i != 1) {
        fprintf(stderr, "Verifiez votre valeur.\n");
        return EXIT_FAILURE;
    }
	x = -1;
	for (i = 0 ; i < 10 ; i++) {
		if (tab[i] == a) {
			x = i;
			break;
		}
	}
	printf("%d\n", x);
	return EXIT_FAILURE;
}