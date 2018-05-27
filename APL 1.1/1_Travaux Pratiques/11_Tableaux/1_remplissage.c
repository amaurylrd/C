#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int 	main(void) {
	int 	i;
	int 	tab[10];
	
	srand(time(NULL));
	i = 0;
	while (i < 10) {
		tab[i] = (rand() % 101 - 50);
		printf("%d ", tab[i]);
		i++;
	}
	putchar('\n');
	return EXIT_SUCCESS;
}
