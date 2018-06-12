#include <stdio.h>
#include <stdlib.h>

int 	main(void) {
	int tab[3][3] = {{8, 3, 4},
				     {1, 5, 9},
			 	     {6, 7, 2}};
	int i, j, x, t;

	for (i = 0 ; i < 3 ; i++) {
		for (j = 0 ; j < 3 ; j++) {
			printf("Proposer une valeur pour (%d, %d) : ", i, j);
			t = scanf("%d", &x);
			if (tab[i][j] != x) {
				printf("PERDU !\n");
				return EXIT_FAILURE;
			}
		}
	}
	printf("GAGNE !\n");
	return EXIT_SUCCESS;
}
