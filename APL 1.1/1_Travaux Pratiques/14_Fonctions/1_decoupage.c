#include <stdio.h>
#include <stdlib.h>

int 	trngl(int nb);
int 	sq(int nb);

int 	main(void) {
	int				t;
	char			a;
	unsigned int	nb;
	
	printf("\n _______________\n  t) Triangle\n  c) Carre\n  q) Quitter\n Votre choix ? ");
	t = scanf("%c", &a);
	getchar();
	while (t != 1) {
		printf("Verifiez vos valeurs.\n  t) Triangle\n  c) Carre\n Votre choix ? ");
		t = scanf("%c", &a);
		getchar();
	}
	if (a == 'q') {
		printf("\n Au revoir.\n");
		return EXIT_SUCCESS;
	}
	printf("\n Hauteur ? ");
	t = scanf("%u", &nb);
	getchar();
	putchar('\n');
	while (t != 1) {
		printf("Verifiez votre valeur.\n Hauteur ? ");
		t = scanf("%u", &nb);
		getchar();
		putchar('\n');
	}
	if (a == 't')
		trngl(nb);
	if (a == 'c')
		sq(nb);
	main();
	return EXIT_SUCCESS;
}

int 	trngl(int nb) {
	int 		i, cmp;

	for (i = 1 ; i <= nb ; i++) {
		for (cmp = i ; cmp != 0 ; cmp--)
			printf("* ");
		putchar('\n');
	}
	return EXIT_SUCCESS;
}

int 	sq(int nb) {
	int 		i, cmp;

	for (i = 1 ; i <= nb ; i++)
		printf("* ");
	for (i = 2 ; i < nb ; i++) {
		putchar('\n');
		for (cmp = 0 ; cmp < nb ; cmp++) {
			if (cmp == 0 || cmp == nb-1) {
				printf("* ");
				cmp++;
			}
			printf("  ");
		}
	}
	putchar('\n');
	for (i = 1 ; i <= nb ; i++)
		printf("* ");
	putchar('\n');
	return EXIT_SUCCESS;
}
