#include <stdio.h>
#include <stdlib.h>

int 	pascal(int n) {
	int 	tab[30][30];
	int 	j, i;

	j = 0;
	while (j < n) {
		i = 0;
		while (i <= j ) {
			if (i == 0 || j == i)
				tab[j][i] = 1;
			else	
				tab[j][i] = tab[j-1][i] + tab[j-1][i-1];
			printf("%8d ", tab[j][i]);
			i++;
		}
		putchar('\n');
		j++;
	}
	return EXIT_SUCCESS;
}

int 	main(int argc, char **argv) {
	if (argc != 2) {
		fprintf(stderr, "Usage : %s <int>.\n", argv[0]);
		return EXIT_FAILURE;
	}
	pascal(atoi(argv[1]));
	return EXIT_SUCCESS;
}
