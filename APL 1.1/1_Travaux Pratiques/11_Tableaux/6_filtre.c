#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int 	main(void) {
	int 	x, i;
	int 	tab[10];
	
	srand(time(NULL));
	for (i = 0 ; i < 10 ; i++) {
		x = (rand() % 100 - 50);
		tab[i] = x; 
		printf("%d ", tab[i]);
	}
	putchar('\n');
	for (i = 0 ; i < 10 ; i++) {
		if (tab[i] * -1 < 0)
			printf("%d ", tab[i]);
	}		
	putchar('\n');
	return EXIT_SUCCESS;
}
