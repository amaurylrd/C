#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int 	main(void) {
	int 	x, i, max;
	int 	tab[10];

	srand(time(NULL));
	i = 0;
	while (i < 10) {
		x = (rand() % 100 - 50);
		tab[i] = x;
		printf("%d ", tab[i]);
		i++;
	}
	i = 0;
	max = tab[0];
	while (i < 10) {
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	printf("\n%d\n", max);
	return EXIT_SUCCESS;
}
